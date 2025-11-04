// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

// Estructura de información de cada atleta
struct Atleta {
    string nombre;
    string departamento;
    string deporte;
    int oro;
    int plata;
    int bronce;
};

void registrarAtletas(vector<Atleta> &atletas, int n) {
    for (int i = 0; i < n; i++) {
        Atleta a;
        cout << "\nAtleta #" << i+1 << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, a.nombre);
        cout << "Departamento: ";
        getline(cin, a.departamento);
        cout << "Deporte: ";
        getline(cin, a.deporte);
        a.oro = 0;
        a.plata = 0;
        a.bronce = 0;
        atletas.push_back(a);
    }
}

// Función para registrar medallas
void registrarMedallas(vector<Atleta> &atletas, int m) {
    for (int i = 0; i < m; i++) {
        string nombre, tipo;
        cout << "\nRegistro de medalla #" << i+1 << endl;
        cin.ignore();
        cout << "Nombre del atleta: ";
        getline(cin, nombre);
        cout << "Tipo de medalla (oro/plata/bronce): ";
        getline(cin, tipo);

        bool encontrado = false;
        for (int j = 0; j < atletas.size(); j++) {
            if (atletas[j].nombre == nombre) {
                if (tipo == "oro") atletas[j].oro++;
                else if (tipo == "plata") atletas[j].plata++;
                else if (tipo == "bronce") atletas[j].bronce++;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            cout << "Atleta no encontrado. Verifique el nombre.\n";
        }
    }
}

// mostrar el medallero final por departamento
void mostrarMedallero(const vector<Atleta> &atletas) {
    map<string, vector<int>> medallero; 

    for (int i = 0; i < atletas.size(); i++) {
        string dep = atletas[i].departamento;
        if (medallero.find(dep) == medallero.end()) {
            medallero[dep] = {0, 0, 0};
        }
        medallero[dep][0] += atletas[i].oro;
        medallero[dep][1] += atletas[i].plata;
        medallero[dep][2] += atletas[i].bronce;
    }

    cout << "\n====== Medallero Final por Departamento ======\n";
    cout << left << setw(15) << "Departamento"
         << setw(8) << "Oro"
         << setw(8) << "Plata"
         << setw(8) << "Bronce" << endl;

    for (auto it = medallero.begin(); it != medallero.end(); ++it) {
        cout << left << setw(15) << it->first
             << setw(8) << it->second[0]
             << setw(8) << it->second[1]
             << setw(8) << it->second[2] << endl;
    }
}

int main() {
    vector<Atleta> atletas;
    int n, m;
    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    registrarAtletas(atletas, n);
    cout << "\nIngrese cuantos registros de medallas va a ingresar: ";
    cin >> m;
    registrarMedallas(atletas, m);
    mostrarMedallero(atletas);

    return 0;
}

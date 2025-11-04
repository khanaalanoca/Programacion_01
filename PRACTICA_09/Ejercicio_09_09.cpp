// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// notas de un alumno
struct Alumno {
    string nombre;
    float T1, T2, T3, T4, EF;
    float NP; // Nota de presentación
    float NF; // Nota final
};

void registrarAlumnos(vector<Alumno> &alumnos, int n) {
    for (int i = 0; i < n; i++) {
        Alumno a;
        cout << "\nAlumno #" << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, a.nombre);
        cout << "T1: ";
        cin >> a.T1;
        cout << "T2: ";
        cin >> a.T2;
        cout << "T3: ";
        cin >> a.T3;
        cout << "T4: ";
        cin >> a.T4;
        cout << "EF: ";
        cin >> a.EF;

        // Calcular nota de presentacion y nota final
        a.NP = (a.T1 + a.T2 + a.T3 + a.T4) / 4.0;
        a.NF = 0.7 * a.NP + 0.3 * a.EF;

        alumnos.push_back(a);
    }
}

void mostrarNotas(const vector<Alumno> &alumnos) {
    cout << "\n====== Notas Finales ======\n";
    cout << left << setw(20) << "Nombre"
         << setw(10) << "NP"
         << setw(10) << "EF"
         << setw(10) << "NF" << endl;

    for (int i = 0; i < alumnos.size(); i++) {
        cout << left << setw(20) << alumnos[i].nombre
             << setw(10) << fixed << setprecision(2) << alumnos[i].NP
             << setw(10) << alumnos[i].EF
             << setw(10) << alumnos[i].NF << endl;
    }
}

void estadisticas(const vector<Alumno> &alumnos) {
    float suma = 0;
    float minimo = alumnos[0].NF;
    float maximo = alumnos[0].NF;

    for (int i = 0; i < alumnos.size(); i++) {
        suma += alumnos[i].NF;
        if (alumnos[i].NF < minimo) minimo = alumnos[i].NF;
        if (alumnos[i].NF > maximo) maximo = alumnos[i].NF;
    }

    float promedio = suma / alumnos.size();

    cout << "\nPromedio de notas finales: " << fixed << setprecision(2) << promedio << endl;
    cout << "Nota minima: " << minimo << endl;
    cout << "Nota maxima: " << maximo << endl;
}

int main() {
    int n;
    vector<Alumno> alumnos;

    cout << "Ingrese el nu4mero de alumnos: ";
    cin >> n;

    registrarAlumnos(alumnos, n);
    mostrarNotas(alumnos);
    estadisticas(alumnos);

    return 0;
}

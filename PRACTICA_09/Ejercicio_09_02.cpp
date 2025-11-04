// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 2

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct Atleta {
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};

void mostrarResultado(const Atleta& atleta);
void ingresarAtleta(Atleta& atleta);
Atleta encontrarMejorTiempo(const vector<Atleta>& atletas);

int main() {
    int N;
    cout << "Ingrese el numero de atletas (N): ";
    cin >> N;
    cin.ignore(); 
    vector<Atleta> atletas(N);

    // Ingresar datos de cada atleta
    for (int i = 0; i < N; ++i) {
        cout << "\nIngrese datos del atleta " << (i + 1) << ":" << endl;
        ingresarAtleta(atletas[i]);
    }
    // Encontrar y mostrar el atleta con el mejor tiempo
    Atleta mejor_atleta = encontrarMejorTiempo(atletas);
    mostrarResultado(mejor_atleta);

    return 0;
}


void ingresarAtleta(Atleta& atleta) {
    cout << "Nombre: ";
    getline(cin, atleta.nombre);
    cout << "Pais: ";
    getline(cin, atleta.pais);
    cout << "Edad: ";
    cin >> atleta.edad;
    cout << "Mejor tiempo (en segundos): ";
    cin >> atleta.mejor_tiempo;
    cin.ignore(); 
}

// Función para encontrar el atleta con el mejor tiempo (menor tiempo)
Atleta encontrarMejorTiempo(const vector<Atleta>& atletas) {
    Atleta mejor_atleta = atletas[0];
    for (const auto& atleta : atletas) {
        if (atleta.mejor_tiempo < mejor_atleta.mejor_tiempo) {
            mejor_atleta = atleta;
        }
    }
    return mejor_atleta;
}

void mostrarResultado(const Atleta& atleta) {
    cout << "\nAtleta con el mejor tiempo:" << endl;
    cout << "Nombre: " << atleta.nombre << endl;
    cout << "Pais: " << atleta.pais << endl;
}


// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 15/10/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Ingrese el numero de filas: ";
    cin >> N;
    cout << "Ingrese el numero de columnas: ";
    cin >> M;

    int matriz[100][100];      
    int transpuesta[100][100]; 
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calculos
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Mostrar la matriz transpuesta
    cout << "\nLa matriz transpuesta es:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

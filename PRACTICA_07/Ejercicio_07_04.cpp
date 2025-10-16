// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 15/10/2025
// Número de ejercicio: 4

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el tamano de la matriz: "<< endl;
    cin >> N;
    
    if (N < 1) {
        cout << "Error" << endl;
        return 1;
    }
    
    vector<vector<int>> matriz(N, vector<int>(N));
    
    for(int i = 0; i < N; i++) {
        int start = 1 + i * 2;  // Primer número de la fila
        for(int j = 0; j < N; j++) {
            matriz[i][j] = start + j;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

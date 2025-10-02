// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 30/09/2025
// Número de ejercicio: 4
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimension N de los vectores: ";
    cin >> N;

    vector<double> vector1(N);
    vector<double> vector2(N);
    vector<double> resultado(N);

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> vector1[i];
    }
    
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> vector2[i];
    }
    // Multiplicacion elemento a elemento
    for (int i = 0; i < N; ++i) {
        resultado[i] = vector1[i] * vector2[i];
    }
    cout << "Vector resultado (multiplicacion de cada elemento):" << endl;
    for (int i = 0; i < N; ++i) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}

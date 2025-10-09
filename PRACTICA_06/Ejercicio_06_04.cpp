// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 4
// Crea un programa que permita al usuario ingresar N números en un vector y luego rota/
//el vector k posiciones a la derecha. Muestra el vector después de la rotación.

#include <iostream>  
#include <vector>    
using namespace std;  

int main() {
    int N;
    cout << "Ingresa el tamano del vector (N): ";
    cin >> N;
    if (N <= 0) {
        cout << "N debe ser mayor que 0. ¡Adios!" << endl;
        return 0;
    }
    vector<int> vec(N);
    cout << "Ingresa " << N << " numeros:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vec[i];  
    }

    // Mostrar vector original
    cout << "\nVector original: ";
    for (int i = 0; i < N; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    int K;
    cout << "Ingresa el numero de posiciones a rotar a la derecha (K): ";
    cin >> K;
    K = K % N;
    if (K < 0) K += N;  
    if (K == 0) {
        cout << "K=0, no hay rotacion. Vector: ";
        for (int i = 0; i < N; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
        return 0;
    }
    vector<int> rotado(N);
    for (int i = 0; i < N; i++) {
        int pos_original = (i - K + N) % N;  
        rotado[i] = vec[pos_original];  // Copiamos del original
    }

    cout << "\nVector rotado " << K << " posiciones a la derecha: ";
    for (int i = 0; i < N; i++) {
        cout << rotado[i] << " ";
    }
    cout << endl;

    return 0;
}
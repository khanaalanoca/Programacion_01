// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 09/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    

using namespace std;

int main() {
    int n;  // Número de lanzamientos
    int contador_pares = 0;  
    cout << "Ingrese el numero de lanzamientos del dado: ";
    cin >> n;

    // semilla para numeros aleatorios
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int lanzamiento = rand() % 6 + 1; 
        cout << "Lanzamiento " << i + 1 << ": " << lanzamiento << endl;

        // número es par o no
        if (lanzamiento % 2 == 0) {
            contador_pares++;
        }
    }
    cout << "Cantidad de caras pares obtenidas: " << contador_pares << endl;

    return 0;
}
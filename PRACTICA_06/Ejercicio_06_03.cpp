// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 3
// Problema planteado: Se tiene 3 vectores de 10 elementos cada uno, Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
//Esto debe realizar N veces.

#include <iostream>   
#include <vector>     
#include <string>     
#include <cstdlib>   
#include <ctime>    

using namespace std;  

int main() {
    
    srand(time(NULL));
    vector<string> nombres(10);
    vector<string> apellidos(10);
    vector<int> edades(10);
    
    cout << "Ingresa los 10 nombres (uno por uno):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Nombre " << (i + 1) << ": ";
        cin >> nombres[i];  // Guarda en nombres[i]
    }
    cout << "\nIngresa los 10 apellidos (uno por uno):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Apellido " << (i + 1) << ": ";
        cin >> apellidos[i];  // Guarda en apellidos[i]
    }
    cout << "\nIngresa las 10 edades (enteros, uno por uno):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Edad " << (i + 1) << ": ";
        cin >> edades[i];  // Guarda en edades[i]
    }
    if (nombres.size() != 10 || apellidos.size() != 10 || edades.size() != 10) {
        cout << "Error: Deben ser exactamente 10 elementos cada uno. ¡Adios!" << endl;
        return 1;  
    }

    int N;
    cout << "\nIngresa el numero de selecciones aleatorias (N): ";
    cin >> N;

    // Si N <= 0, salir
    if (N <= 0) {
        cout << "N debe ser mayor que 0. ¡Adios!" << endl;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        // Generar índices aleatorios (0 a 9)
        int idx_nombre = rand() % 10;
        int idx_apellido = rand() % 10;
        int idx_edad = rand() % 10;
        cout << "Persona " << (i + 1) << ": " << nombres[idx_nombre] << " " 
             << apellidos[idx_apellido] << ", Edad: " << edades[idx_edad] << " anos." << endl;
    }

    cout << "\n¡Fin de las selecciones!" << endl;
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 30/09/2025
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime>    
using namespace std;

// Funcion para generar un vector de voltajes entre 20.00 y 220.00
vector<double> generarVoltajes(int n) {
    vector<double> voltajes(n);
    for (int i = 0; i < n; ++i) {
        // Generar numero entre 2000 y 22000 (para 2 decimales)
        int val = 2000 + rand() % (22000 - 2000 + 1);
        voltajes[i] = val / 100.0;
    }
    return voltajes;
}

// Funcion para generar un vector de temperaturas entre 0.00 y 100.00
vector<double> generarTemperaturas(int n) {
    vector<double> temperaturas(n);
    for (int i = 0; i < n; ++i) {
        int val = rand() % 10001; // 0 a 10000
        temperaturas[i] = val / 100.0;
    }
    return temperaturas;
}

// Funcion para generar un vector de caracteres alfanumericos (30 elementos)
vector<char> generarCaracteres(int n) {
    vector<char> caracteres(n);
    string alfanumericos = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int size = alfanumericos.size();
    for (int i = 0; i < n; ++i) {
        int idx = rand() % size;
        caracteres[i] = alfanumericos[idx];
    }
    return caracteres;
}

// Funcion para generar un vector de años entre 1990 y 2025
vector<int> generarAnios(int n) {
    vector<int> anios(n);
    for (int i = 0; i < n; ++i) {
        anios[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
    return anios;
}

// Funcion para generar un vector de velocidades entre 10.00 y 300.00
vector<double> generarVelocidades(int n) {
    vector<double> velocidades(n);
    for (int i = 0; i < n; ++i) {
        int val = 1000 + rand() % (30000 - 1000 + 1); // 10.00 a 300.00 con 2 decimales
        velocidades[i] = val / 100.0;
    }
    return velocidades;
}

// Funcion para generar un vector de distancias entre 1.00 y 1000.00
vector<double> generarDistancias(int n) {
    vector<double> distancias(n);
    for (int i = 0; i < n; ++i) {
        int val = 100 + rand() % (100000 - 100 + 1); // 1.00 a 1000.00 con 2 decimales
        distancias[i] = val / 100.0;
    }
    return distancias;
}

int main() {
    srand(time(nullptr)); 

    auto voltajes = generarVoltajes(100);
    auto temperaturas = generarTemperaturas(50);
    auto caracteres = generarCaracteres(30);
    auto anios = generarAnios(100);
    auto velocidades = generarVelocidades(32);
    auto distancias = generarDistancias(1000);

    cout << "Primeros 5 voltajes: ";
    for (int i = 0; i < 5; ++i) cout << voltajes[i] << " ";
    cout << "\nPrimeras 5 temperaturas: ";
    for (int i = 0; i < 5; ++i) cout << temperaturas[i] << " ";
    cout << "\nCaracteres: ";
    for (char c : caracteres) cout << c << " ";
    cout << "\nPrimeros 5 years: ";
    for (int i = 0; i < 5; ++i) cout << anios[i] << " ";
    cout << "\nPrimeras 5 velocidades: ";
    for (int i = 0; i < 5; ++i) cout << velocidades[i] << " ";
    cout << "\nPrimeras 5 distancias: ";
    for (int i = 0; i < 5; ++i) cout << distancias[i] << " ";
    cout << endl;

    return 0;
}


// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> nombres;
    cout << "Ingresa nombres uno por uno. Escribe 'fin' para terminar:" << endl;
    string nombre;
    while (true) {
        getline(cin, nombre);
        if (nombre == "fin") {
            break;
        }
        nombres.push_back(nombre);
    }
    ofstream archivoSalida("nombres.txt");
    if (!archivoSalida) {
        cerr << "Error al abrir el archivo para escritura." << endl;
        return 1;
    }
    for (const auto& n : nombres) {
        archivoSalida << n << endl;
    }
    archivoSalida.close();
    
    // Abrir el archivo para lectura
    ifstream archivoEntrada("nombres.txt");
    if (!archivoEntrada) {
        cerr << "Error al abrir el archivo para lectura." << endl;
        return 1;
    }
    
    // Leer y mostrar cada nombre en la consola
    cout << "\nNombres leídos del archivo:" << endl;
    string linea;
    while (getline(archivoEntrada, linea)) {
        cout << linea << endl;
    }
    
    // Cerrar el archivo de lectura
    archivoEntrada.close();
    
    return 0;
}

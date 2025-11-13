// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 8

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream archivo("documento.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo documento.txt" << endl;
        return 1;
    }

    string contenido;
    string linea;
    int lineas = 0;

    // leer el archivo linea por linea y construir el contenido completo
    while (getline(archivo, linea)) {
        contenido += linea + "\n";
        lineas++;
    }
    archivo.close();
    int caracteres = contenido.length();
    stringstream ss(contenido);
    string palabra;
    int palabras = 0;
    while (ss >> palabra) {
        palabras++;
    }
    cout << "Numero total de lineas: " << lineas << endl;
    cout << "Numero total de palabras: " << palabras << endl;
    cout << "Numero total de caracteres: " << caracteres << endl;

    return 0;
}

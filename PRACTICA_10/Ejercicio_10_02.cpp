// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Función para contar palabras en el contenido del archivo
int contarPalabras(const string& contenido) {
    stringstream ss(contenido);
    string palabra;
    int contador = 0;
    while (ss >> palabra) {
        contador++;
    }
    return contador;
}

// Función para leer el contenido del archivo
string leerArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        return "";
    }
    stringstream buffer;
    buffer << archivo.rdbuf();
    archivo.close();
    return buffer.str();
}

int main() {
    string nombreArchivo = "texto.txt";
    string contenido = leerArchivo(nombreArchivo);
    
    if (contenido.empty()) {
        return 1; // Error al leer el archivo
    }
    int numeroPalabras = contarPalabras(contenido);
    cout << "El archivo " << nombreArchivo << " contiene " << numeroPalabras << " palabras." << endl;
    return 0;
}

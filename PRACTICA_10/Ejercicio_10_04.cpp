// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("datos.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo datos.txt" << endl;
        return 1;
    }

    string palabraBuscada;
    cout << "Ingrese la palabra o frase que desea buscar: ";
    getline(cin, palabraBuscada);

    string linea;
    int contador = 0;

    while (getline(archivo, linea)) {
        size_t pos = linea.find(palabraBuscada);
        while (pos != string::npos) {
            contador++;
            pos = linea.find(palabraBuscada, pos + palabraBuscada.length());
        }
    }
    archivo.close();

    cout << "\nLa palabra o frase '" << palabraBuscada 
         << "' aparece " << contador << " veces en el archivo." << endl;

    return 0;
}

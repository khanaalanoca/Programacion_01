// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 8

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char cifrarCaracter(char c) {
    if (islower(c)) {
        return ((c - 'a' + 3) % 26) + 'a';
    } else if (isupper(c)) {
        return ((c - 'A' + 3) % 26) + 'A';
    } else {
        return c; // No cifrar si no es letra
    }
}
string cifrarTexto(const string& texto) {
    string resultado;
    for (char c : texto) {
        resultado += cifrarCaracter(c);
    }
    return resultado;
}
int main() {
    ifstream archivoEntrada("mensaje.txt");
    if (!archivoEntrada) {
        cerr << "Error al abrir el archivo mensaje.txt" << endl;
        return 1;
    }

    ofstream archivoSalida("mensaje_cifrado.txt");
    if (!archivoSalida) {
        cerr << "Error al crear el archivo mensaje_cifrado.txt" << endl;
        return 1;
    }

    string linea;
    while (getline(archivoEntrada, linea)) {
        string lineaCifrada = cifrarTexto(linea);
        archivoSalida << lineaCifrada << endl;
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "Cifrado completado. El resultado se guardo en mensaje_cifrado.txt" << endl;
    return 0;
}

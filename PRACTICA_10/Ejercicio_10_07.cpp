// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 7


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream entrada("calificaciones.txt");
    if (!entrada) {
        cout << "No se pudo abrir el archivo calificaciones.txt" << endl;
        return 1;
    }

    ofstream salida("promedios.txt");
    if (!salida) {
        cout << "No se pudo crear el archivo promedios.txt" << endl;
        return 1;
    }

    string linea;
    while (getline(entrada, linea)) {
        stringstream ss(linea);
        string nombre;
        ss >> nombre;

        float nota, suma = 0;
        int contador = 0;

        while (ss >> nota) {
            suma += nota;
            contador++;
        }

        if (contador > 0) {
            float promedio = suma / contador;
            salida << nombre << " " << promedio << endl;
        }
    }

    entrada.close();
    salida.close();

    cout << "\nSe ha creado el archivo 'promedios.txt' con los promedios de cada estudiante." << endl;

    return 0;
}

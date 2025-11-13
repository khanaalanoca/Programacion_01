// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 6

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream entrada("temperaturas.txt");
    if (!entrada) {
        cout << "No se pudo abrir el archivo temperaturas.txt" << endl;
        return 1;
    }

    ofstream salida("altas_temperaturas.txt");
    if (!salida) {
        cout << "No se pudo crear el archivo altas_temperaturas.txt" << endl;
        return 1;
    }
    float limite;
    cout << "Ingrese la temperatura limite (en grados C): ";
    cin >> limite;
    string ciudad;
    float temperatura;
    while (entrada >> ciudad >> temperatura) {
        if (temperatura > limite) {
            salida << ciudad << " " << temperatura << endl;
        }
    }
    entrada.close();
    salida.close();
    cout << "\nSe ha creado el archivo 'altas_temperaturas.txt' con las ciudades filtradas." << endl;
    return 0;
}

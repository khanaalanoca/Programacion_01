// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

int main() 
{
    int celsius, kelvin; //solo con numero enteros
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    kelvin = celsius + 273;
    cout << "La temperatura en Kelvin es: " << kelvin << " K" << endl;

    return 0;
}
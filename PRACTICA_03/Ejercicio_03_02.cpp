// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float celsius_a_fahrenheit(float celsius);

int main()
{
    float celsius;
    cout << "Introduce la temperatura en grados Celsius: ";
    cin >> celsius;

    float fahrenheit = celsius_a_fahrenheit(celsius);
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
} 
float celsius_a_fahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32;
}
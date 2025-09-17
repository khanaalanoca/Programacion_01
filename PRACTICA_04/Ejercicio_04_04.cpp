// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 17/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

double ConvertirCelsiusAFahrenheit(double celsius);
double MayorTemperatura(double temp1, double temp2);

int main() {
    double celsius1, celsius2;
    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> celsius1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> celsius2;

    double fahrenheit1 = ConvertirCelsiusAFahrenheit(celsius1);
    double fahrenheit2 = ConvertirCelsiusAFahrenheit(celsius2);

    cout << "\nPrimera temperatura en Fahrenheit: " << fahrenheit1 << endl;
    cout << "Segunda temperatura en Fahrenheit: " << fahrenheit2 << endl;

    // Obtener la mayor temperatura en Fahrenheit
    double mayor = MayorTemperatura(fahrenheit1, fahrenheit2);
    cout << "La mayor temperatura en Fahrenheit es: " << mayor << endl;

    return 0;
}
// Funcion que convierte grados Celsius a Fahrenheit
double ConvertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
    
// Funcion que devuelve el mayor de dos valores de temperatura
double MayorTemperatura(double temp1, double temp2) {
    if (temp1 > temp2)
        return temp1;
    else
        return temp2;
}
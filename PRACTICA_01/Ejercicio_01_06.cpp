// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main ()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    // ver si el numero es positivo, negativo o cero
    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }
    return 0;
 
}
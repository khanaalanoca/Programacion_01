// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/09/2025
// Número de ejercicio: 22

#include <iostream>
using namespace std;

int main()
 {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    if (num1 % num2 == 0) {
        cout << num1 << " es multiplo de " << num2 << endl;
    } else if (num2 % num1 == 0) {
        cout << num2 << " es multiplo de " << num1 << endl;
    } else {
        cout << "Ninguno es multiplo del otro" << endl;
    }
    return 0;
} // si al divivir num1 con num2 el resuido es 0 es multiplo del otro
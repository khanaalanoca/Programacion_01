// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 31/08/2025
// Número de ejercicio: 17

#include <iostream>
using namespace std;
int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}
int main() 
{
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    if (numero1 != numero2 && sumaDivisores(numero1) == numero2 && sumaDivisores(numero2) == numero1) {
        cout << numero1 << " y " << numero2 << " son numeros amigos." << endl;
    } else {
        cout << numero1 << " y " << numero2 << " no son numeros amigos." << endl;
    }
    return 0;
    }

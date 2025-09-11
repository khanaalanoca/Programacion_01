// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

bool es_capicua(int numero);

int main() 
{ // un numero capicua se lee igual de izquierda a derecha y de derecha a izquierda
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;

    if (es_capicua(num)) {
        cout << num << " es capicua." << endl;
    } else {
        cout << num << " no es capicua." << endl;
    }

    return 0;
}
bool es_capicua(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    return original == invertido;
}

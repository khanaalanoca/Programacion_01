// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 28/08/2025
// Número de ejercicio: 13

#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Ingrese un número N: ";
    cin >> N;
    int suma = N * (N + 1) / 2;
    cout << "La suma de los enteros desde 1 hasta " << N << " es: " << suma << endl;
    return 0;
}
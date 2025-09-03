// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/09/2025
// Número de ejercicio: 21

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;
    cout << "Ingrese los 2 numeros a multiplicar:" << endl;
    cin >> numero1 >> numero2;
    int resultado = 0;
    for (int i = 0; i < numero2; i++)
    {
        resultado += numero1;
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}

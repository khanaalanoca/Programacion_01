// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 27/08/2025
// Número de ejercicio: 12

#include <iostream>
using namespace std;

int main ()
{
    int numero;
     do {
        cout << "Ingrese un número entre 1 y 5: ";
        cin >> numero;
        // valida el numero en un rango de de 1-5
        if (numero < 1 || numero > 5) {
            cout << "Número inválido. Intente de nuevo." << endl;
        }
    } while (numero < 1 || numero > 5);
    cout << "Número válido ingresado: " << numero << endl;
    
    return 0;
}
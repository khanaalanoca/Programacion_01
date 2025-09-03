// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 02/09/2025
// Número de ejercicio: 25

#include <iostream>
using namespace std;

int main() // las tablas se muestran hasta el 10
{
    int numero, continuar;
    do {
        char continuar;
        cout << "Ingrese el numero del que quiere generar su tabla" << endl;
        cin >> numero;
        for(int i = 1; i <= 10; i++){
            int resultado = numero * i;
            cout << numero << " x " << i << " = " << resultado << endl;
        }
        cout << endl;
        cout << "Desea generar otra tabla? (s/n)" << endl;
        cin >> continuar;
    } while (continuar == 's');
    return 0;
}

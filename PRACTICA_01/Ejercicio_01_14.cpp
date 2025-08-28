// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 28/08/2025
// Número de ejercicio: 14

#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Ingrese un numero: " << endl;
    cin >> N;
    cout << "la figura es: " << endl;
    // se refiere a lo que se formara en pantalla

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

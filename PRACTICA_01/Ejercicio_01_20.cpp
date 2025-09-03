// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 01/09/2025
// Número de ejercicio: 20

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: " ;
    cin >> n;

    int digitos = 0;

    while (n > 0) {
        digitos = digitos + 1;
        n = n / 10; // se divide entre 10 para obtener el ultimo digito
    }

    cout << "La cantidad de digitos del numero es: " << digitos << endl;

return 0;
}
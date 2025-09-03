// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 02/09/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    int inversa = 0;
    while (numero > 0) {
        int resto = numero % 10;
        inversa = inversa * 10 + resto;
        numero /= 10;
    } //el %10 es para sacar el ultimo digito y colocarlo al inicio al sacra la inversa
    cout << "El numero invertido es " << inversa << endl;
    return 0;
}

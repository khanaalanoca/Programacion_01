// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 16/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

// Función que recibe un entero por valor y otro por referencia
void ModificarValores(int valorPorValor, int& valorPorReferencia);

int main() {
    int a, b;

    cout << "Ingrese un valor entero para 'a': ";
    cin >> a;

    cout << "Ingrese un valor entero para 'b': ";
    cin >> b;

    cout << "\nAntes de llamar a ModificarValores:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    ModificarValores(a, b);

    cout << "\nDespues de llamar a ModificarValores:" << endl;
    cout << "a = " << a << " (no cambia porque es por valor)" << endl;
    cout << "b = " << b << " (cambia porque es por referencia)" << endl;

    return 0;
}
void ModificarValores(int valorPorValor, int& valorPorReferencia) {
    valorPorValor = valorPorValor * 2;      
    valorPorReferencia = valorPorReferencia + 10; 
}
// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 16/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void intercambiar (int &a, int &b);

int main()
{
    int a, b;
    cout << "Ingrese los valores de las variables" << endl;
    cin >> a >> b;
    
    cout << "La variable a es: " << a << endl;
    cout << "La variable b es: " << b << endl;
    
    cout << endl << endl;
    
    intercambiar(a, b);
    
    cout << "La variable a es: " << a << endl;
    cout << "La variable b es: " << b << endl;

    return 0;
}
void intercambiar (int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}
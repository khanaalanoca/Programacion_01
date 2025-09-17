// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 17/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double descuento (double &total);
double IVA (double total);
int main()
{
    srand(time(NULL));
    int n, precio;
    precio = rand()%(50 - 20) + 20 + 1;
    
    cout << "Ingrese la cantidad de productos" << endl;
    cin >> n;
    
    cout << "Cada producto cuesta: " << precio << endl;
    
    double total = n * precio;
    double des = 0.0;
    
    cout << "El total de ganancia es: " << total << endl;
    
    if(total >= 2500.0){
        des = descuento(total);
    }
    
    cout << "Se aplico un descuento de: " << des << endl;
    cout << "La ganancia despues del descuento es: " << total << endl;
    double imp = IVA(total);
    cout << "El impuesto a pagar por IVA es de: " << imp << endl;
}
double descuento (double &total){
    double d = total * 0.05;
    total = total - d;
    return d;
}

double IVA (double total){
    double impuesto = total * 0.13;
    return impuesto;
}
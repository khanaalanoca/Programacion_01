// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 3/10/25


#include <iostream>
using namespace std;
double parteFraccionaria (double n);
int main (){
    double numero=0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La parte fracciinaria es: "<< parteFraccionaria(numero);
    return 0;

}
double parteFraccionaria (double n){
    int entero=int(n);
    double fraccion=0;
    fraccion=n-entero;
    return fraccion;
}
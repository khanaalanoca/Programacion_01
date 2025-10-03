// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 3/10/25

#include <iostream>
using namespace std;
int encontrarMax (int n, int n2);
int main (){
    int numero1=0;
    int numero2=0;
    cout << "Ingrese el primer numero: "<< endl;
    cin >> numero1;
    cout<< "Ingrese el segundo numero: "<< endl;
    cin >> numero2;
    cout << "El mayor numero entre "<< numero1 << " y "<< numero2
    <<" es "<< encontrarMax(numero1, numero2);

    return 0;
} 
int encontrarMax (int n, int n2){
    if (n>n2)
    {
        return n;
    }
    else{
        return n2;
    }
}
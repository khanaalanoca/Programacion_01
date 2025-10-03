// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 3/10/25

#include <iostream>
using namespace std;
bool esPar (int n);
int main (){
    int numero=0;
    cout <<"Ingrese un numero: "; 
    cin>> numero;
    if (esPar(numero))
    {
        cout<<"El numero "<< numero << " es par";
    }
    else{
        cout << "El n numero "<< numero << " no es par";
    }
    return 0;
}
bool esPar (int n){
    if (n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
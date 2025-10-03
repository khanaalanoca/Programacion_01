// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 2/10/25

#include <iostream>
using namespace std;
int main(){
    int notas=0;
    int suma=0;
    int promedio=0;
    int minima=0;
    cout << "Ingrese las notas del estudiante"<< endl;
    for (int i = 0; i <5; i++)
    {
        cout << "Ingrese la nota "<< i+1 << ": "<< endl;
        cin >> notas ;
        suma+=notas;
        if (notas < 80)
        {
            minima+=1;
        }
    }
    promedio+=suma/5;
    if (minima==0 && promedio>85)
    {
        cout << "El estudiante pertenece a la lista de honor con un promedio de: "<< promedio<< endl;
    }
    else{
        cout << "El estudiante no pertenece a la lista de honor porque tiene " 
        << minima<< " notas menores a 80"<< endl;
    }
    return 0;
}
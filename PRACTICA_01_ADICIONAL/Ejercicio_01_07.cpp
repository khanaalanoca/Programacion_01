// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 3/10/25

#include <iostream>
using namespace std;

int main (){
    int numero=0;
    int moneda=0;
    int frecuenciaCaras=0, frecuenciaCruz=0;
    srand(time(0));
    cout <<"Ingrese la cantidad de veces que quiere tirar la moneda: ";
    cin >> numero;
    for (int i = 0; i < numero; i++)
    {
        moneda=rand()%2; // 0 es cruz y 1 cara
        if (moneda == 0)
        {
            frecuenciaCruz++;
        }
        else
        {
            frecuenciaCaras++;
        }
        
    }
    cout <<"La frecucncia de cara es: "<< frecuenciaCaras<< endl;
    cout << "La de frecuencia de cruz es: "<< frecuenciaCruz<< endl;
    return 0;
}
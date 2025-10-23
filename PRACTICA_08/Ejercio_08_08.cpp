// Materia: Programación I, Paralelo 4
// Autor: Khana Alaoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/10/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;


void Ullman(int N);
int main()
{
    int N;
    do 
    {
        cout << "Ingrese un numero:";
        cin >> N;
        if (!(N>1))
        {
            cout << "Por favor Ingrese un numero positivo"<<endl;
            system("pause");
        }
    } while (!(N>1));
    Ullman(N);
    return 0;
}

void Ullman(int N){
    if (N==1) //base
    {
        cout << N<<"\t";
    }
    else
    {
        cout <<N<<"\t";
        if (N%2==0)
        {
            Ullman(N/2);
        }
        else
        {
            Ullman(3*N+1);
        }
    }
}
// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 3/10/25

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
bool esPrimo(int n);
int main(){
    int N=0;
    int suma=0;
    int numeroAleatorio=0;
    cout << "Ingresa la cantidad de datos que quieres: ";
    cin >>N;
    srand(time(0));
    cout <<"Los numero aleatorio son:\n";
    for (int i = 0; i < N; i++)
    {
        numeroAleatorio=(rand()%1000+1);
        suma+=numeroAleatorio;
        cout << numeroAleatorio;
        if (esPrimo(numeroAleatorio))
        {
            cout << " *";
        }
        cout << endl;
    }
    cout<<"La suma de los numeros es: "<< suma<<endl;
    cout<<"El promedio es: "<< suma/N;
    return 0;
}
bool esPrimo(int n) {
    if (n <= 1) return false; // 0,1 y negativos no son primos
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
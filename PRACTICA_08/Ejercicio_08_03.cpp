// Materia: Programación I, Paralelo 4
// Autor: Khana Alaoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/10/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int fibonacci(int n);
int main()
{
    int n;
    cout << "Ingrese el numero de la secuencia fibonacci: ";
    cin >> n;
    cout << "El numero " << n <<  " de la secuencia de fibonacci es: "<<fibonacci(n);
    return 0;
}

int fibonacci(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2); //la secuencia de fibonacci genera numeros a partir de la suma de sus dos anteriores
}
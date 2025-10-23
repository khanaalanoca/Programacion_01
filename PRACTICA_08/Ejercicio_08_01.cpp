// Materia: Programación I, Paralelo 4
// Autor: Khana Alaoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/10/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int suma(int numero);

int main()
{
    int numero=0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La suaa es:  "<<suma(numero);
    return 0;
}

//funcion recursiva 
int suma(int numero){
    if (numero == 0 )//condicion de termino
    {
        return 0;
    }
    return numero % 10 + suma(numero/10); 
}
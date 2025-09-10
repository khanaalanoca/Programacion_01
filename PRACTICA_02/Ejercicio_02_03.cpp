// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 09/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() 
{
    srand(time(0));  //semilla para numeros aleatorios

    int num = rand() % 10 + 1;  // numero aleatorio entre 1 y 10
    cout << "Numero aleatorio: " << num << endl;

    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial de " << num << " es: " << factorial << endl;

    return 0;
}

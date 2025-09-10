// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() 
{
    int N;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> N;  

    srand(time(0));  // semilla para numeros aleatorios

    int suma = 0;   
    int contador = 0;
    int mayor, menor; 

    // Ciclo que se repite N veces para generar los numeros aleatorios
    while (contador < N) {
        int num = rand() % 1000 + 1;  
        cout << "Numero " << contador + 1 << ": " << num << endl;  
        suma += num;

        if (contador == 0) {
            mayor = num;
            menor = num;
        } else {
            if (num > mayor) mayor = num;
            if (num < menor) menor = num;
        }

        contador++;  // incrementamos el contador
    }
    double promedio = static_cast<double>(suma) / N;

    // resultados finales
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor generado: " << mayor << endl;
    cout << "Menor valor generado: " << menor << endl;

    return 0;
}


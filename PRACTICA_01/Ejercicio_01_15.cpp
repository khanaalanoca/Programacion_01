// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 28/08/2025
// Número de ejercicio: 15

#include <iostream>
using namespace std;
int main()
  {
    int N;
    float nota, suma = 0, promedio;

    cout << "Ingrese la cantidad de notas: ";
    cin >> N;
// i se utilza en for como contador
    for (int i = 1; i <= N; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / N;

    cout << "El promedio general es: " << promedio << endl;

   return 0;
}



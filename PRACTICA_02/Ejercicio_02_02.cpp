// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 09/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() 
{
    int n;  
    int contador_caras = 0;  
    int contador_cruces = 0; 
    cout << "Ingrese el numero de lanzamientos de la moneda: ";
    cin >> n;
    srand(time(0));  // semilla para numeros aleatorios

    for (int i = 0; i < n; i++) {
        int lanzamiento = rand() % 2;  // 0 para cara, 1 para cruz

        if (lanzamiento == 0) {
            contador_caras++;
            cout << "Lanzamiento " << i + 1 << ": Cara" << endl;
        } else {
            contador_cruces++;
            cout << "Lanzamiento " << i + 1 << ": Cruz" << endl;
        }
    }
//porcentajes
    double porcentaje_caras = (contador_caras * 100.0) / n;
    double porcentaje_cruces = (contador_cruces * 100.0) / n;

    cout << "Porcentaje de caras: " << porcentaje_caras << "%" << endl;
    cout << "Porcentaje de cruces: " << porcentaje_cruces << "%" << endl;

    return 0;
}

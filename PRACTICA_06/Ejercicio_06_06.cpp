// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 5
// Problema planteado:  Rango de calificaciones en un curso: Un maestro tiene N calificaciones de sus
//estudiantes en un vector. Las calificaciones deben ser llenadas en forma aleatoria entre 0
//y 100. Luego debe calcular el porcentaje de estudiantes en cada rango

#include <iostream>   
#include <vector>    
#include <cstdlib>    
#include <ctime>     
#include <iomanip>    

using namespace std; 

int main() {
    srand(time(NULL));

    int N;
    cout << "Ingresa el numero de estudiantes (N): ";
    cin >> N;

    // Si N <= 0, salimos
    if (N <= 0) {
        cout << "N debe ser mayor que 0. ¡Adios!" << endl;
        return 0;
    }
    vector<int> calificaciones(N);
    cout << "Calificaciones generadas aleatoriamente:" << endl;
    for (int i = 0; i < N; i++) {
        calificaciones[i] = rand() % 101;  
        cout << "Estudiante " << (i + 1) << ": " << calificaciones[i] << endl;
    }

    int reprobado = 0;   // 0-59
    int regular = 0;     // 60-79
    int bueno = 0;       // 80-89
    int excelente = 0;   // 90-100

    for (int i = 0; i < N; i++) {
        int calif = calificaciones[i];
        if (calif >= 0 && calif <= 59) {
            reprobado++;
        } else if (calif >= 60 && calif <= 79) {
            regular++;
        } else if (calif >= 80 && calif <= 89) {
            bueno++;
        } else if (calif >= 90 && calif <= 100) {
            excelente++;
        }
    }

    // Calcular porcentajes
    double porc_reprobado = (reprobado * 100.0) / N;
    double porc_regular = (regular * 100.0) / N;
    double porc_bueno = (bueno * 100.0) / N;
    double porc_excelente = (excelente * 100.0) / N;

    // Mostrar resultados con formato (2 decimales)
    cout << "\n--- Porcentajes por rango ---" << endl;
    cout << fixed << setprecision(2);  
    cout << "Reprobado (0-59): " << porc_reprobado << "%" << endl;
    cout << "Regular (60-79): " << porc_regular << "%" << endl;
    cout << "Bueno (80-89): " << porc_bueno << "%" << endl;
    cout << "Excelente (90-100): " << porc_excelente << "%" << endl;

    double total = porc_reprobado + porc_regular + porc_bueno + porc_excelente;
    cout << "Total: " << total << "% (debe ser 100.00)" << endl;

    return 0;
}

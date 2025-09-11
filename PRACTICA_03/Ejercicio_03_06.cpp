// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Materia: Programación I, Paralelo 4
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;
void dias_del_mes(int mes) ;
int main() {
    int mes;
    cout << "Introduce un mes (1-12): ";
    cin >> mes;
    dias_del_mes(mes);

    return 0;
}
void dias_del_mes(int mes) 
{
    switch (mes) {
        //cada mes itercalado tiene 31 menos 7 y 8
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "El mes tiene 31 dias." << endl;
            break; 
        case 4: case 6: case 9: case 11:
            cout << "El mes tiene 30 dias." << endl;
            break;  

        // para 2 (febrero)
        case 2:
            cout << "El mes tiene 28 o 29 das (depende si es bisiesto)." << endl;
            break;  
        default:
            cout << "Mes inválido." << endl;
    }
}
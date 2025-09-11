// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Materia: Programación I, Paralelo 4
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

double tiempoTrabajado(int minutos);
void mostrarResultado ();

int main()
{
    mostrarResultado();
    return 0;
}
double tiempoTrabajado(int minutos)
{
    double horas = minutos / 60.0;
    return horas - 8.0;
}
void mostrarResultado () 
{
    cout << "Ingrese la cantidad de minutos trabajados" << endl;
    int minutos;
    cin >> minutos;
    double horas = tiempoTrabajado(minutos);
    
    if(horas == 0){
        cout << "Ha trabajado 8 horas exactas" << endl;
    } else if (horas < 0){
        cout << "Ha trabajado menos horas" << endl;
        cout << "Le debe a la empresa: " << (-1) * horas << " horas de trabajo" << endl;
    } else if (horas > 0){
        cout << "Ha trabajado horas extra" << endl;
        cout << "La empresa le debe pagar " << horas << " horas extra" << endl;
    }
}
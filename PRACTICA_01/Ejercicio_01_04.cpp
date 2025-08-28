// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 4

#include <iostream>
#include <cmath> // Para usar PI
using namespace std;

int main() 
{
    float radio, volumen;  //float para aceptar decimales
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}
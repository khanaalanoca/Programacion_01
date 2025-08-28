// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int main() 
{
    
    float base, altura, area;
    // datos del triangulo
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "El area del triangulo es: " << area << endl;
    
    return 0;
}
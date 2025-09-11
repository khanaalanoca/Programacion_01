// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Materia: Programación I, Paralelo 4
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

float calcular_imc(float peso, float altura);
int main() 
{
    float peso, altura;
    cout << "Introduce el peso en kilogramos: ";
    cin >> peso;
    cout << "Introduce la altura en metros: ";
    cin >> altura;

    float imc = calcular_imc(peso, altura);
    cout << "El IMC es: " << imc << endl;
    // IMC 
    if (imc < 18.5) {
        cout << "Bajo peso" << endl;
    } else if (imc < 25) {
        cout << "Peso normal" << endl;
    } else if (imc < 30) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidad" << endl;
    }

    return 0;
}
float calcular_imc(float peso, float altura) 
{
    return peso / (altura * altura);
}
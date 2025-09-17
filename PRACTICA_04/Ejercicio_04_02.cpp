// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 16/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cmath> 
using namespace std;

// Función que calcula el volumen de un cilindro
double CalcularVolumen(double radio, double altura = 10);

int main() {
    double radio;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    // Validar que el radio sea positivo
    if (radio <= 0) {
        cout << "El radio debe ser un valor positivo." << endl;
        return 1;
    }
    double volumen = CalcularVolumen(radio); // altura por defecto = 10
    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}

double CalcularVolumen(double radio, double altura=10) {
    return M_PI * pow(radio, 2) * altura;
}
   
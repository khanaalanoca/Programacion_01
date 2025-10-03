// Materia: Programación I, Paralelo 4 
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Bioamedica 
// Fecha creación: 2/10/25

#include <iostream>
using namespace std;

bool esPrimo(int n);
int main() {
    int numero = 0;
    int sumaPrimos = 0;
    int cantidadPrimos = 0;

    while (true) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero <= 0) {
            cout << "Numero invalido. Terminando programa..." << endl;
            break; // salir del bucle
        }

        if (esPrimo(numero)) {
            sumaPrimos += numero;
            cantidadPrimos++;
        }
    }

    if (cantidadPrimos > 0) {
        cout << "El promedio de los numeros primos es: "
             << sumaPrimos /cantidadPrimos << endl;
    } else {
        cout << "No se ingresaron numeros primos." << endl;
    }

    return 0;
}
bool esPrimo(int n) {
    if (n <= 1) return false; // 0,1 y negativos no son primos
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
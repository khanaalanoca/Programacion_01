// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 27/08/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese la nota del estudiante: " << endl;
    cin >> nota;

    if (nota >= 0 && nota <= 100) {
        if (nota < 60) {
            cout << "Tiene la calificacion de C-" << endl;
        } else if (nota < 70) {
            cout << "Tiene la calificacion de C+" << endl;
        } else if (nota < 80) {
            cout << "Tiene la calificacion de B-" << endl;
        } else if (nota < 90) {
            cout << "Tiene la calificacion de B+" << endl;
        } else if (nota < 95) {
            cout << "Tiene la calificacion de A-" << endl;
        } else if (nota <= 100) {
            cout << "Tiene la calificacion de A+" << endl;
        }
    } else {
        cout << "El estudiante local ingreso una nota invalida" << endl;
    }

    return 0;
}


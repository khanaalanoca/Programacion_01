// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 02/09/2025
// Número de ejercicio: 24

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    do { //las opciones van de 1 a 0
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ha elegido la opcion 1" << endl << endl;
        }

        if (opcion == 2) {
            cout << "Ha elegido la opcion 2" << endl << endl;
        }

        if (opcion == 3) {
            cout << "Ha elegido la opcion 3" << endl << endl;
        }

        if (opcion == 0) {
            cout << "Ha salido del sistema" << endl;
        } else if (opcion != 1 && opcion != 2 && opcion != 3) {
            cout << "Elija una opcion valida" << endl;
        }

    } while (opcion != 0);

    return 0;
}

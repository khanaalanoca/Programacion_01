// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void registrarEstudiantes() {
    ofstream archivo("estudiantes.txt", ios::app); // abre en modo agregar
    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    Estudiante e;
    char continuar;

    do {
        cout << "Ingrese nombre: ";
        getline(cin, e.nombre);
        cout << "Ingrese edad: ";
        cin >> e.edad;
        cout << "Ingrese promedio: ";
        cin >> e.promedio;
        cin.ignore();

        archivo << "Nombre: " << e.nombre << endl;
        archivo << "Edad: " << e.edad << endl;
        archivo << "Promedio: " << e.promedio << endl;
        archivo << endl; 

        cout << "Desea registrar otro estudiante? (s/n): ";
        cin >> continuar;
        cin.ignore();
    } while (continuar == 's' || continuar == 'S');

    archivo.close();
    cout << "\nDatos guardados correctamente en 'estudiantes.txt'\n";
}

void mostrarEstudiantes() {
    ifstream archivo("estudiantes.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string linea;
    cout << "\n--- REGISTROS DE ESTUDIANTES ---\n\n";
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {
    int opcion;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Registrar estudiantes" << endl;
        cout << "2. Mostrar registros" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1:
            registrarEstudiantes();
            break;
        case 2:
            mostrarEstudiantes();
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 3);

    return 0;
}

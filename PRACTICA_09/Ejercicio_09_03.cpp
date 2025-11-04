// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 2

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

void ingresarAlumno(Alumno& alumno);
void mostrarAlumno(const Alumno& alumno);
int main() {
    int n;
    cout << "Ingrese el numero de alumnos (n): ";
    cin >> n;
    cin.ignore(); 
    vector<Alumno> alumnos(n);
    for (int i = 0; i < n; ++i) {
        cout << "\nIngrese datos del alumno " << (i + 1) << ":" << endl;
        ingresarAlumno(alumnos[i]);
    }

    // Mostrar los datos
    cout << "\nDatos de los alumnos:" << endl;
    for (const auto& alumno : alumnos) {
        mostrarAlumno(alumno);
    }

    return 0;
}


void ingresarAlumno(Alumno& alumno) {
    cout << "Cedula: ";
    cin >> alumno.cedula;
    cin.ignore(); 
    cout << "Nombre: ";
    getline(cin, alumno.nombre);
    cout << "Apellido: ";
    getline(cin, alumno.apellido);
    cout << "Edad: ";
    cin >> alumno.edad;
    cin.ignore();
    cout << "Profesion: ";
    getline(cin, alumno.profesion);
    cout << "Lugar de nacimiento: ";
    getline(cin, alumno.lugar_nacimiento);
    cout << "Direccion: ";
    getline(cin, alumno.direccion);
    cout << "Telefono: ";
    cin >> alumno.telefono;
    cin.ignore();
}

void mostrarAlumno(const Alumno& alumno) {
    cout << "Cedula: " << alumno.cedula << endl;
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Apellido: " << alumno.apellido << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Profesion: " << alumno.profesion << endl;
    cout << "Lugar de nacimiento: " << alumno.lugar_nacimiento << endl;
    cout << "Direccion: " << alumno.direccion << endl;
    cout << "Telefono: " << alumno.telefono << endl;
    cout << endl;
}


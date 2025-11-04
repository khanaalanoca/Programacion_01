// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 3

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct Empleado {
    string nombre;
    string genero;
    double salario;
};

void ingresarEmpleado(Empleado& empleado) {
    cout << "Nombre: ";
    getline(cin, empleado.nombre);
    cout << "Genero: ";
    getline(cin, empleado.genero);
    cout << "Salario: ";
    cin >> empleado.salario;
    cin.ignore(); 
}


Empleado encontrarMenorSalario(const vector<Empleado>& empleados) {
    Empleado menor = empleados[0];
    for (const auto& emp : empleados) {
        if (emp.salario < menor.salario) {
            menor = emp;
        }
    }
    return menor;
}

Empleado encontrarMayorSalario(const vector<Empleado>& empleados) {
    Empleado mayor = empleados[0];
    for (const auto& emp : empleados) {
        if (emp.salario > mayor.salario) {
            mayor = emp;
        }
    }
    return mayor;
}

void mostrarEmpleado(const Empleado& empleado) {
    cout << "Nombre: " << empleado.nombre << endl;
    cout << "Genero: " << empleado.genero << endl;
    cout << "Salario: " << empleado.salario << endl;
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese el numero de empleados (N): ";
    cin >> N;
    cin.ignore(); 

    vector<Empleado> empleados(N);

    // Ingresar datos de cada empleado
    for (int i = 0; i < N; ++i) {
        cout << "\nIngrese datos del empleado " << (i + 1) << ":" << endl;
        ingresarEmpleado(empleados[i]);
    }

    // Encontrar empleados con menor y mayor salario
    Empleado menor_salario = encontrarMenorSalario(empleados);
    Empleado mayor_salario = encontrarMayorSalario(empleados);

    cout << "\nEmpleado con el menor salario:" << endl;
    mostrarEmpleado(menor_salario);

    cout << "Empleado con el mayor salario:" << endl;
    mostrarEmpleado(mayor_salario);

    return 0;
}

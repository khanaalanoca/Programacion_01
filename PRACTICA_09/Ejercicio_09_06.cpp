// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado {
    string nombre;
    int id;
    double sueldo;
    int antiguedad;
};

// Función para ingresar los datos de un empleado
void ingresarEmpleado(Empleado& empleado) {
    cout << "Nombre: ";
    getline(cin, empleado.nombre);
    cout << "ID: ";
    cin >> empleado.id;
    cout << "Sueldo: ";
    cin >> empleado.sueldo;
    cout << "Antiguedad : ";
    cin >> empleado.antiguedad;
    cin.ignore(); 
}

int contarEmpleadosSueldoMayor(const vector<Empleado>& empleados, double valor_sueldo) {
    int contador = 0;
    for (size_t i = 0; i < empleados.size(); ++i) {
        if (empleados[i].sueldo > valor_sueldo) {
            contador++;
        }
    }
    return contador;
}

double calcularPromedioAntiguedad(const vector<Empleado>& empleados) {
    if (empleados.empty()) {
        return 0.0;
    }
    double suma = 0.0;
    for (size_t i = 0; i < empleados.size(); ++i) {
        suma += empleados[i].antiguedad;
    }
    return suma / empleados.size();
}

int main() {
    int N;
    cout << "Ingrese el número de empleados (N): ";
    cin >> N;
    cin.ignore(); 

    vector<Empleado> empleados(N);

    for (int i = 0; i < N; ++i) {
        cout << "\nIngrese datos del empleado " << (i + 1) << ":" << endl;
        ingresarEmpleado(empleados[i]);
    }
    double valor_sueldo;
    cout << "\nIngrese un valor de sueldo para comparar: ";
    cin >> valor_sueldo;
    int cantidad = contarEmpleadosSueldoMayor(empleados, valor_sueldo);
    cout << "Numero de empleados con sueldo mayor a " << valor_sueldo << ": " << cantidad << endl;

    double promedio_antiguedad = calcularPromedioAntiguedad(empleados);
    cout << "\nPromedio de antiguedad de los empleados: " << promedio_antiguedad << " anios" << endl;

    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Fecha creación: 17/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

int main() {
    int horasTrabajadas;
    double tarifaHora, bonificacionHoraExtra;
    double salarioNormal = 0.0, salarioBonificacion = 0.0, salarioTotal = 0.0;

    // Pedir datos al usuario
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaHora;
    cout << "Ingrese la bonificacion por hora extra: ";
    cin >> bonificacionHoraExtra;

    // Calcular salario normal 8 horas
    int horasNormales = (horasTrabajadas > 8) ? 8 : horasTrabajadas;
    salarioNormal = horasNormales * tarifaHora;

    // Calcular horas extra y bonificacion
    int horasExtra = (horasTrabajadas > 8) ? (horasTrabajadas - 8) : 0;
    salarioBonificacion = horasExtra * bonificacionHoraExtra;

    // Calcular salario total
    salarioTotal = salarioNormal + salarioBonificacion;
    cout << "\nSalario del trabajador (por horas normales): $" << salarioNormal << endl;
    if (horasExtra > 0) {
        cout << "Salario bonificacion por horas extra: $" << salarioBonificacion << endl;
    } else {
        cout << "No hay bonificacion por horas extra." << endl;
    }
    cout << "Salario total a pagar: $" << salarioTotal << endl;

    return 0;
}

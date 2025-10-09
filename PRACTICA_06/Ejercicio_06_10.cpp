// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 10
// Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena. 
// Entrada: "abc123def456"  
// Salida: "abcdef"

#include <iostream>   // Para cin y cout
#include <string>     // Para strings
#include <cctype>     // Para isdigit() (detectar dígitos)

using namespace std;  // Simplifica el código

int main() {
    string entrada;
    cout << "Ingresa una cadena: ";
    cin >> entrada;
    if (entrada.empty()) {
        cout << "" << endl;
        return 0;
    }

    string resultado = "";
    for (int i = 0; i < entrada.length(); i++) {
        if (!isdigit(entrada[i])) {  // Si NO es dígito (0-9)
            resultado += entrada[i];  
        }
    }

    cout << resultado << endl;

    return 0;
}

// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 13
// Problema planteado: Crea una función que reciba un String de cualquier tipo y se encargue de poner en 
//mayúscula la primera letra de cada palabra.

#include <iostream>   
#include <string>     
#include <cctype>     

using namespace std;  
string capitalizar(string texto) {
    string resultado = texto;  
    int len = resultado.length();
    for (int i = 0; i < len; i++) {
        // Detectar inicio de palabra: al principio o después de espacio
        bool inicio_palabra = (i == 0) || (resultado[i - 1] == ' ');
        if (inicio_palabra && isalpha(resultado[i])) {
            resultado[i] = toupper(resultado[i]);
        }
    }

    return resultado;  // Retornar la versión capitalizada
}

int main() {
    string texto;
    cout << "Ingresa un texto: ";
    getline(cin, texto);  
    string capitalizado = capitalizar(texto);
    cout << "Texto capitalizado: " << capitalizado << endl;

    return 0;
}

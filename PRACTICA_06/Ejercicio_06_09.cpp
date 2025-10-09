// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 9
// Problema planteado:Escribe un programa que invierta el orden de las palabras en una oración sin cambiar el 
//orden de los caracteres dentro de cada palabra. 

#include <iostream>   // Para cin, cout y getline
#include <string>     // Para strings (find, substr, erase)
#include <vector>     // Para vectores de palabras

using namespace std;  // Simplifica el código

int main() {
    string oracion;
    cout << "Ingresa una oracion: ";
    getline(cin, oracion);  
    if (oracion.empty()) {
        cout << "" << endl;  
        return 0;
    }
    vector<string> palabras;
    size_t pos = 0; 
    while ((pos = oracion.find(' ')) != string::npos) {  
        if (pos > 0) {  
            palabras.push_back(oracion.substr(0, pos)); 
        }
        oracion.erase(0, pos + 1); 
    }
    if (!oracion.empty()) {
        palabras.push_back(oracion);
    }
    for (int i = palabras.size() - 1; i >= 0; i--) {
        cout << palabras[i];
        if (i > 0) {  
            cout << " ";
        }
    }
    cout << endl;  

    return 0;
}




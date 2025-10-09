// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 11
// Problema planteado:  Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un 
//delimitador. Por ejemplo, dividir una oración en palabras.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separar (string texto, char delimitador){
    int n = texto.length();
    vector<string> palabras;
    string p = "";
    
    for(int i = 0; i < n; i++){
        if(texto[i] != delimitador){
            p = p + texto[i];
        } else if (texto[i] == delimitador && p.length() > 0){
            palabras.push_back(p);
            p = "";
        }
    }
    
    if(p.length() > 0){
        palabras.push_back(p);
    }
    
    return palabras;
}

void mostrar (vector<string> palabras){
    for(string i : palabras){
        cout << i << endl;
    }
}

int main()
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);
    
    char delimitador;
    
    cout << "Ingrese el delimitador: " << endl;
    cin >> delimitador;
    vector<string> palabras = separar(texto, delimitador);
    cout << "El mensaje sin el delimitador es: " << endl;
    mostrar(palabras);
    
    return 0;
}
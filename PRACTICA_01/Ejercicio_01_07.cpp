// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 27/08/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int main ()
{
    char caracter;
    cout << "Ingresa una letra" << endl;
    cin >> caracter;
    if ((caracter >= 'A'|| caracter <= 'Z')|| (caracter >= 'a' && caracter<='z')){   
        if (caracter >= 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' ){
            cout << " Es vocal" << endl;
        }else{
          cout << "Es comsonante" << endl;
        }
     } else {
        cout << "Es un caracter especial" << endl;  

    }
    return 0;
}
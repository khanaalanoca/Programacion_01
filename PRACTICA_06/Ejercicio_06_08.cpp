// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 8
// Problema planteado:

#include <iostream>   
#include <string>   

using namespace std;  

int main() {
    string email;
    cout << "Ingresa la direccion de correo electronico: ";
    cin >> email;  
    if (email.empty()) {
        cout << "Correo electrónico inválido" << endl;
        return 0;
    }

    // Contar '@' y encontrar su posición 
    int count_at = 0;
    int pos_at = -1;
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            count_at++;
            pos_at = i;
        }
    }

    // Validar exactamente un '@'
    if (count_at != 1) {
        cout << "Correo electrónico inválido" << endl;
        return 0;
    }

    // Buscar al menos un '.' después del '@'
    bool tiene_punto_despues = false;
    for (int i = pos_at + 1; i < email.length(); i++) {
        if (email[i] == '.') {
            tiene_punto_despues = true;
            break;
        }
    }
    if (tiene_punto_despues) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}

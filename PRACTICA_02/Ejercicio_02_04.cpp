// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int p = rand() % (51);
    
    int intentos = 1, prueba = -1;
    int minimo = 0, maximo = 50;
    
    while(prueba != p && intentos <= 5){
        cout << "Estoy pensando en un numero entre: " << minimo << " y " << maximo << endl;
        cout << "Intento " << intentos << ": " << endl;
        
        cin >> prueba;
        
        if(prueba == p){
            cout << "Felicidades, ganaste" << endl;
        } else if (prueba < p){
            minimo = prueba;
            cout << "Numero equivocado" << endl;
        } else if (prueba > p){
            maximo = prueba;
            cout << "Numero equivocado" << endl;
        }
        
        intentos++;
    }
    
    if(prueba != p){
        cout << "Perdiste el juego" << endl;
    }
    return 0;
}
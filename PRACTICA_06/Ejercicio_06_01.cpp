// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 1
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir
//de este arreglo determine la desviación típica.

#include <iostream>  
#include <vector>    
#include <cmath>     
using namespace std;  

int main() {
    vector<double> edades;  
    double edad;           

    cout << "Ingresa las edades de las personas (ingresa -1 para parar):" << endl;
    while (cin >> edad && edad != -1) {
        edades.push_back(edad);  
        cout << "Edad guardada: " << edad << ". Ingresa la siguiente: ";
    }
    if (edades.empty()) {
        cout << "No se ingresaron edades. ¡Adiós!" << endl;
        return 0;
    }
    double suma = 0.0;
    for (double e : edades) {  
        suma += e;
    }
    double media = suma / edades.size();  
    cout << "Media de edades: " << media << endl;
    double varianza = 0.0;
    for (double e : edades) {
        double diferencia = e - media;
        varianza += pow(diferencia, 2);  
    }
    varianza /= edades.size();  
    double desviacion = sqrt(varianza);
    cout << "Desviacion tipica: " << desviacion << endl;
    cout << "Edades ingresadas: ";
    for (double e : edades) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}

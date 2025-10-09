// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 2
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y
//otro contiene los nombres de estos minerales

#include <iostream>   // Para cin, cout
#include <string>     // Para strings
#include <vector>     // Para vector de pares
#include <algorithm>  // Para sort
#include <iomanip>    // Para formatear salida (setprecision)

using namespace std;

// Arreglos constantes con los datos (no se pueden cambiar)
const string nombres[] = {"SN", "SB", "AU", "PT", "AG", "CU"};
const double producciones[] = {998.0, 876.5, 786.67, 636.143, 135.567, 109.412};
const int NUM_MINERALES = 6;  // Tamaño fijo

int main() {
    int opcion;
    do {
        cout << "\n--- Menu de Minerales ---" << endl;
        cout << "1. Buscar mineral por nombre y mostrar produccion" << endl;
        cout << "2. Mostrar minerales ordenados por produccion (mayor a menor)" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            // Funcionalidad 1: Busqueda (ya usa for normal)
            string buscar;
            cout << "Ingresa el nombre del mineral (ej: SN): ";
            cin >> buscar;

            bool encontrado = false;
            for (int i = 0; i < NUM_MINERALES; i++) {  // For normal: recorre con índice i
                if (nombres[i] == buscar) {
                    cout << "Produccion de " << buscar << ": " << fixed << setprecision(3) 
                         << producciones[i] << " toneladas metricas." << endl;
                    encontrado = true;
                    break;  // Salimos del bucle una vez encontrado
                }
            }
            if (!encontrado) {
                cout << "Mineral no encontrado. Intenta de nuevo." << endl;
            }

        } else if (opcion == 2) {
            // Funcionalidad 2: Ordenar y mostrar (ahora con for normal para imprimir)
            vector<pair<double, string>> lista;  // Par: produccion (primero), nombre (segundo)

            // Llenamos el vector con for normal
            for (int i = 0; i < NUM_MINERALES; i++) {
                lista.push_back(make_pair(producciones[i], nombres[i]));  // Crea un par
            }

            // Ordenamos DEL MAYOR AL MENOR: sort descendente por produccion
            sort(lista.rbegin(), lista.rend());  // rbegin/rend para reverso (mayor a menor)

            // Mostrar en formato tabla con for normal
            cout << "\nMineral  Produccion ™" << endl;
            cout << "---------------------" << endl;
            for (int i = 0; i < lista.size(); i++) {  // For normal: usa i para acceder por índice
                cout << setw(8) << lista[i].second << "  " << fixed << setprecision(3) << lista[i].first << endl;
            }

        } else if (opcion == 0) {
            cout << "¡Adios!" << endl;
        } else {
            cout << "Opcion invalida. Intenta de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}

// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 5

#include <iostream>   
#include <vector>     
#include <string>     
using namespace std;  

int main() {
    int N1, N2;
    cout << "Ingresa el numero de clientes de la Empresa A (N1): ";
    cin >> N1;
    if (N1 <= 0) {
        cout << "N1 debe ser mayor que 0. ¡Adios!" << endl;
        return 0;
    }

    vector<string> listaA(N1);
    cout << "Ingresa los " << N1 << " nombres de clientes de Empresa A (uno por uno):" << endl;
    for (int i = 0; i < N1; i++) {
        cout << "Cliente " << (i + 1) << ": ";
        cin >> listaA[i];  // Guarda en listaA[i]
    }
    cout << "\nIngresa el numero de clientes de la Empresa B (N2): ";
    cin >> N2;
    if (N2 <= 0) {
        cout << "N2 debe ser mayor que 0. ¡Adios!" << endl;
        return 0;
    }

    vector<string> listaB(N2);
    cout << "Ingresa los " << N2 << " nombres de clientes de Empresa B (uno por uno):" << endl;
    for (int i = 0; i < N2; i++) {
        cout << "Cliente " << (i + 1) << ": ";
        cin >> listaB[i];  
    }
    vector<string> comunes;  
    bool ya_agregado;

    for (int i = 0; i < N1; i++) {  
        ya_agregado = false;  
        for (string c : comunes) {  
            if (c == listaA[i]) {
                ya_agregado = true;
                break;
            }
        }

        if (ya_agregado) continue;  
        bool encontrado = false;
        for (int j = 0; j < N2; j++) { 
            if (listaA[i] == listaB[j]) {
                encontrado = true;
                break;  
            }
        }

        if (encontrado) {
            comunes.push_back(listaA[i]);  // Agregar a comunes
        }
    }

    // Mostrar resultados
    cout << "\n--- Clientes en comun (interseccion) ---" << endl;
    if (comunes.empty()) {
        cout << "No hay clientes en comun entre las dos empresas." << endl;
    } else {
        cout << "Clientes repetidos:" << endl;
        for (int k = 0; k < comunes.size(); k++) {  
            cout << "- " << comunes[k] << endl;
        }
        cout << "Total de clientes en comun: " << comunes.size() << endl;
    }

    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 15/10/2025
// Número de ejercicio: 1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el orden de la matriz (n): ";
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    cout << "Ingrese los elementos de la matriz (" << n << " filas y " << n << " columnas):" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
    if(n > 1) {  
        vector<int> temp = matriz[0];  
        matriz[0] = matriz[n-1];       
        matriz[n-1] = temp;            
    }
    
    //la matriz modificada
    cout << "Matriz despues de intercambiar la primera y la ultima fila:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";  // Imprimir cada elemento seguido de un espacio
        }
        cout << endl;  
    }
    
    return 0;
}

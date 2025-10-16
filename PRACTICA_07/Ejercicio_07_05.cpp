// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 15/10/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void resultado (int matriz1[1000][1000], int matriz2[1000][1000], int n, int m){
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            int r = 0;
            for(int j = 0; j < m; j++){
                r += matriz1[k][j] * matriz2[j][i];
            }
            cout << r << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    int n, m;
    cout << "ingrese el valor de n ";
    cin >> n;
    cout << "ingrese el valor de m ";
    cin >> m;
    int matriz1[1000][1000];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz1[i][j];
        }
    }
    
    int matriz2 [1000][1000];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz2[i][j];
        }
    }
    
    resultado(matriz1, matriz2, n, m);
    return 0;
}
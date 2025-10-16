// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 15/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    if (N < 1 || A > B) {
        cout << "Error: N debe ser al menos 1, y A debe ser menor o igual a B." << endl;
        return 1;
    }
    
    srand(time(0));
    vector<vector<int>> matriz(N, vector<int>(N));
    cout << "Matriz generada:" << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matriz[i][j] = A + rand() % (B - A + 1);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    double sumaUltimaColumna = 0;
    for(int i = 0; i < N; i++) sumaUltimaColumna += matriz[i][N-1];
    
    long long productoUltimaFila = 1;
    for(int j = 0; j < N; j++) productoUltimaFila *= matriz[N-1][j];
    
    int maxValor = matriz[0][0];
    int maxFila = 0, maxColumna = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(matriz[i][j] > maxValor) {
                maxValor = matriz[i][j];
                maxFila = i;
                maxColumna = j;
            }
        }
    }
    
    double sumaTotal = 0;
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) sumaTotal += matriz[i][j];
    double media = sumaTotal / (N * N);
    
    double varianza = 0;
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) varianza += pow(matriz[i][j] - media, 2);
    varianza /= (N * N);
    double desviacionEstandar = sqrt(varianza);
    
    cout << "\nResultados:" << endl;
    cout << "1. Suma de la ultima columna: " << sumaUltimaColumna << endl;
    cout << "2. Producto total de la ultima fila: " << productoUltimaFila << endl;
    cout << "3. Mayor valor: " << maxValor << " en (fila: " << maxFila << ", columna: " << maxColumna << ")" << endl;
    cout << "4. Desviacion estandar: " << desviacionEstandar << endl;
    
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Khana Alaoca Limachi
// Carnet: 13760727
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 22/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

int suma (int i, vector<int> vi){
    if(i == 0){
        return vi[0];
    } else {
        return vi[i] + suma(i - 1, vi);
    }
}

int main()
{
    int n;
    cout << "Ingrese el tamanio del vector: " << endl;
    cin >> n;
    vector<int> vi(n);
    for(int i = 0; i < n; i++){
        cin >> vi[i];
    }
    
    int s = suma(n - 1, vi);
    cout << "La suma de los valores del vector es: " << s << endl;
    
    return 0;
}
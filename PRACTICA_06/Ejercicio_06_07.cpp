// Materia: Programación I, Paralelo 1
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 8/10/2024
// Número de ejercicio: 5
// Problema planteado: Compresión de datos en una imagen en escala de grises: Dada una imagen en escala
//de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser
//generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra
//cuántos píxeles hay en cada rango.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> inferior;
vector<int> superior;

vector<int> generarAleatorios (){
    int n;
    cout << "Ingrese la longitud del vector a generar" << endl;
    cin >> n;
    
    vector<int> ra(n);
    
    for(int i = 0; i < n; i++){
        ra[i] = rand()%(256);
        cout << ra[i] << " ";
    }
    cout << endl;
    
    return ra;
}

void generarLimites (){
    int inf = 0;
    while(inf <= 250){
        inferior.push_back(inf);
        inf += 10;
    }
    
    int sup = 9;
    while(sup < 250){
        superior.push_back(sup);
        sup += 10;
    }
    superior.push_back(255);
}

vector<int> contarPixeles (vector<int> ra){
    int n = inferior.size();
    vector<int> seg (n, 0);
    int l = ra.size();
    for(int i = 0; i < l; i++){
        for(int j = 0; j < n; j++){
            if(ra[i] >= inferior[j] && ra[i] <= superior[j]){
                seg[j]++;
            }
        }
    }
    
    return seg;
}

void mostrar(vector<int> seg){
    int n = seg.size();
    for(int i = 0; i < n; i++){
        cout << inferior[i] << " - " << superior[i] << ": " << seg[i] << " pixel(es)" << endl;
    }
}

int main()
{
    generarLimites();
    vector<int> ra = generarAleatorios();
    vector<int> seg = contarPixeles(ra);
    mostrar(seg);

    return 0;
}
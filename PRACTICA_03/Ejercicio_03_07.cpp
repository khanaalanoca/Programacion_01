// Autor: Khana Brigida Alanoca Limachi
// Carnet: 13760727 L.P.
// Materia: Programación I, Paralelo 4
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int aleatorio(int min, int max);
int main() 
{
    int N;
    cout << "Introduce la cantidad de alumnos: ";
    cin >> N;
    // semilla para numeros aleatorios
    srand(time(0));
    int suma_edades = 0;
    int suma_alturas = 0; 
    int contador_mayores_18 = 0;
    int contador_altos = 0;

    for (int i = 0; i < N; i++) {
        int edad = aleatorio(1, 35);
        int altura = aleatorio(120, 200); 
        suma_edades += edad;
        suma_alturas += altura;

        if (edad > 18) {
            contador_mayores_18++;
        }
        if (altura > 175) { // 1.75 metros = 175 cm
            contador_altos++;
        }
    }
    // medidas con numeros decimales
    double edad_media = static_cast<int>(suma_edades) / N;
    double altura_media = static_cast<double>(suma_alturas) / N;

    cout << "Edad media: " << edad_media << " years" << endl;
    cout << "Altura media: " << altura_media / 100 << " metros" << endl; // Convertir cm a metros
    cout << "Cantidad de alumnos mayores de 18 year: " << contador_mayores_18 << endl;
    cout << "Cantidad de alumnos que miden mas de 1.75 metros: " << contador_altos << endl;

    return 0;
}
int aleatorio(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}
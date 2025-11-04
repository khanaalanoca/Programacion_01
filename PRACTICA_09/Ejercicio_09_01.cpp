// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 28/10/2025
// Número de ejercicio: 1

#include <iostream>
#include <string>

using namespace std;
// datos
struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

int main() {
    Libro libro;
    int disp;
    // Solicitar datos al usuario
    cout << "Ingrese el titulo del libro: ";
    getline(cin, libro.titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, libro.autor);
    cout << "Ingrese el anio de publicacion: ";
    cin >> libro.anio_publicacion;
    cout << "Esta disponible? (1 para si, 0 para no): ";
    cin >> disp;
    libro.disponible = (disp == 1);
    // Mostrar los datos del libro
    cout << "\nDatos del libro:" << endl;
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Anio de publicacion: " << libro.anio_publicacion << endl;
    cout << "Disponible: " << (libro.disponible ? "Sí" : "No") << endl;

    return 0;
}

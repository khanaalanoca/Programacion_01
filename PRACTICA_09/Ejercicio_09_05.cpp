// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 5

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pelicula {
    string titulo;
    string director;
    int duracion;
    int anio_estreno;
    string genero;
};

// Función para ingresar los datos de una película
void ingresarPelicula(Pelicula& pelicula) {
    cout << "Titulo: ";
    getline(cin, pelicula.titulo);
    cout << "Director: ";
    getline(cin, pelicula.director);
    cout << "Duracion (en minutos): ";
    cin >> pelicula.duracion;
    cout << "Anio de estreno: ";
    cin >> pelicula.anio_estreno;
    cin.ignore(); // Para manejar el salto de línea
    cout << "Genero: ";
    getline(cin, pelicula.genero);
}

// Función para mostrar películas por género
void mostrarPorGenero(const vector<Pelicula>& peliculas, const string& genero) {
    cout << "\nPeliculas del genero '" << genero << "':" << endl;
    bool encontrado = false;
    for (const auto& pelicula : peliculas) {
        if (pelicula.genero == genero) {
            cout << "Titulo: " << pelicula.titulo << endl;
            cout << "Director: " << pelicula.director << endl;
            cout << "Duracion: " << pelicula.duracion << " minutos" << endl;
            cout << "Anio de estreno: " << pelicula.anio_estreno << endl;
            cout << "Genero: " << pelicula.genero << endl;
            cout << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron peliculas de ese genero." << endl;
    }
}

// Función para mostrar películas por director
void mostrarPorDirector(const vector<Pelicula>& peliculas, const string& director) {
    cout << "\nPeliculas dirigidas por '" << director << "':" << endl;
    bool encontrado = false;
    for (const auto& pelicula : peliculas) {
        if (pelicula.director == director) {
            cout << "Titulo: " << pelicula.titulo << endl;
            cout << "Director: " << pelicula.director << endl;
            cout << "Duracion: " << pelicula.duracion << " minutos" << endl;
            cout << "Anio de estreno: " << pelicula.anio_estreno << endl;
            cout << "Genero: " << pelicula.genero << endl;
            cout << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron peliculas de ese director." << endl;
    }
}

int main() {
    int N;
    cout << "Ingrese el numero de peliculas: ";
    cin >> N;
    cin.ignore(); 
    vector<Pelicula> peliculas(N);

    // Ingresar datos de cada pelicula
    for (int i = 0; i < N; ++i) {
        cout << "\nIngrese datos de la pelicula " << (i + 1) << ":" << endl;
        ingresarPelicula(peliculas[i]);
    }

    // Mostrar películas por genero
    string genero_buscado;
    cout << "\nIngrese el genero a buscar: ";
    getline(cin, genero_buscado);
    mostrarPorGenero(peliculas, genero_buscado);

    // Mostrar películas por director
    string director_buscado;
    cout << "\nIngrese el director a buscar: ";
    getline(cin, director_buscado);
    mostrarPorDirector(peliculas, director_buscado);

    return 0;
}

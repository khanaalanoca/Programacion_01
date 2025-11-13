// Materia: Programación I, Paralelo 4
// Autor: Khana Alanoca Limachi
// Fecha creación: 04/11/2025
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

struct Producto {
    string nombre;
    double precio;
};
vector<Producto> leerProductos(const string& nombreArchivo) {
    vector<Producto> productos;
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        return productos;
    }
    string linea;
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string nombre;
        double precio;
        if (ss >> nombre >> precio) {
            productos.push_back({nombre, precio});
        }
    }
    archivo.close();
    return productos;
}
void escribirProductos(const string& nombreArchivo, const vector<Producto>& productos) {
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error: No se pudo abrir el archivo para escritura " << nombreArchivo << endl;
        return;
    }
    for (const auto& prod : productos) {
        archivo << prod.nombre << " " << fixed << setprecision(2) << prod.precio << endl;
    }
    archivo.close();
}

int main() {
    string nombreArchivo = "productos.txt";
    vector<Producto> productos = leerProductos(nombreArchivo);
    
    if (productos.empty() && !ifstream(nombreArchivo)) {
        cout << "El archivo " << nombreArchivo << " no existe o esta vacio. Creandolo..." << endl;
    }
    string productoBuscar;
    cout << "Ingresa el nombre del producto a actualizar: ";
    getline(cin, productoBuscar);
    double nuevoPrecio;
    cout << "Ingresa el nuevo precio: ";
    cin >> nuevoPrecio;
    cin.ignore(); 
    
    // Buscar y actualizar el producto
    bool encontrado = false;
    for (auto& prod : productos) {
        if (prod.nombre == productoBuscar) {
            prod.precio = nuevoPrecio;
            encontrado = true;
            break;
        }
    }
    
    if (encontrado) {
        // Reescribir el archivo con los datos actualizados
        escribirProductos(nombreArchivo, productos);
        cout << "Precio del producto '" << productoBuscar << "' actualizado exitosamente." << endl;
    } else {
        cout << "El producto '" << productoBuscar << "' no se encuentra en el archivo." << endl;
    }
    
    return 0;
}

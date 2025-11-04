// Materia: Programación I, Paralelo 4
// Autor: Khana Brigida Alanoca Limachi
// Fecha creación: 3/11/2025
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>

using namespace std;
// estructura de datos
struct Producto {
    string nombre;
    string codigo;
    double precio;
    int cantidad_en_inventario;
    string observaciones;
};

void ingresarProducto(Producto& producto) {
    cout << "Nombre: ";
    getline(cin, producto.nombre);
    cout << "Codigo: ";
    getline(cin, producto.codigo);
    cout << "Precio: ";
    cin >> producto.precio;
    cout << "Cantidad en inventario: ";
    cin >> producto.cantidad_en_inventario;
    cin.ignore(); 
    if (producto.cantidad_en_inventario < 5) {
        producto.observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
    } else {
        cout << "Observaciones: ";
        getline(cin, producto.observaciones);
    }
}

Producto encontrarProductoMasCaro(const vector<Producto>& productos) {
    Producto mas_caro = productos[0];
    for (size_t i = 0; i < productos.size(); ++i) {
        if (productos[i].precio > mas_caro.precio) {
            mas_caro = productos[i];
        }
    }
    return mas_caro;
}

int calcularCantidadTotal(const vector<Producto>& productos) {
    int total = 0;
    for (size_t i = 0; i < productos.size(); ++i) {
        total += productos[i].cantidad_en_inventario;
    }
    return total;
}

// Función para mostrar los datos de un producto
void mostrarProducto(const Producto& producto) {
    cout << "Nombre: " << producto.nombre << endl;
    cout << "Codigo: " << producto.codigo << endl;
    cout << "Precio: " << producto.precio << endl;
    cout << "Cantidad en inventario: " << producto.cantidad_en_inventario << endl;
    cout << "Observaciones: " << producto.observaciones << endl;
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese el numero de productos: ";
    cin >> N;
    cin.ignore(); 

    vector<Producto> productos(N);
    for (int i = 0; i < N; ++i) {
        cout << "\nIngrese datos del producto " << (i + 1) << ":" << endl;
        ingresarProducto(productos[i]);
    }

    // Encontrar y mostrar el producto más caro
    Producto mas_caro = encontrarProductoMasCaro(productos);
    cout << "\nProducto más caro:" << endl;
    mostrarProducto(mas_caro);

    // Calcular y mostrar la cantidad total de productos en inventario
    int cantidad_total = calcularCantidadTotal(productos);
    cout << "Cantidad total de productos en inventario: " << cantidad_total << endl;

    return 0;
}

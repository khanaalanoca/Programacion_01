

    // Paso 2: Comparar desde extremos hacia el centro con bucles
    int inicio = 0;
    int fin = len - 1;
    while (inicio < fin) {
        if (limpia[inicio] != limpia[fin]) {
            return false;  // No coincide
        }
        inicio++;
        fin--;
    }

    return true;  // Todo coincide
}

int main() {
    string texto;
    cout << "Ingresa un texto para verificar si es palindromo: ";
    getline(cin, texto);  // Lee completo con espacios

    // Llamar a la función
    if (esPalindromo(texto)) {
        cout << "Es un palíndromo" << endl;
    } else {
        cout << "No es un palíndromo" << endl;
    }

    return 0;
}

#include <iostream>   
#include <string>    
#include <cctype>    

using namespace std; 

bool esPalindromo(string texto) {
    string limpia = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);  
        if (isalpha(c) || isdigit(c)) {  // Si es letra o dígito
            limpia += c;
        }
    }
    int len = limpia.length();
    if (len <= 1) {
        return true;
    }
    int inicio = 0;
    int fin = len - 1;
    while (inicio < fin) {
        if (limpia[inicio] != limpia[fin]) {
            return false; 
        }
        inicio++;
        fin--;
    }
    return true;  
}

int main() {
    string texto;
    cout << "Ingresa un texto para verificar si es palindromo: ";
    getline(cin, texto);  
    if (esPalindromo(texto)) {
        cout << "Es un palindromo" << endl;
    } else {
        cout << "No es un palindromo" << endl;
    }

    return 0;
}

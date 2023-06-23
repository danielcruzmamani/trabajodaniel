#include <iostream>

int main() {
    int m = 30;
    int suma = 0;
    int contador = 0;
    int numero = 0;

    while (contador < m) {
        if (numero % 2 == 0) {
            suma += numero;
            contador++;
        }
        numero++;
    }

    std::cout << "La suma de los primeros " << m << " números pares es: " << suma << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int numeros[10];
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    // Leer los 10 números
    std::cout << "Ingrese 10 números:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> numeros[i];
    }

    // Contar los números positivos, negativos y cero
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    // Mostrar los resultados
    std::cout << "Cantidad de números positivos: " << positivos << std::endl;
    std::cout << "Cantidad de números negativos: " << negativos << std::endl;
    std::cout << "Cantidad de ceros: " << ceros << std::endl;

    return 0;
}

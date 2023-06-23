#include <iostream>

int main() {
    int n;

    // Solicitar al usuario el valor de n
    std::cout << "Ingrese un número: ";
    std::cin >> n;

    // Imprimir la mitad superior del patrón
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    // Imprimir la mitad inferior del patrón
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

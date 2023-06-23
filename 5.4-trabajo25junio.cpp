#include <iostream>

int main() {
    int n;

    // Solicitar al usuario el valor de n
    std::cout << "Ingrese un número no negativo: ";
    std::cin >> n;

    // Verificar que n sea no negativo
    if (n < 0) {
        std::cout << "El número ingresado no es válido." << std::endl;
        return 0;
    }

    // Imprimir la salida
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

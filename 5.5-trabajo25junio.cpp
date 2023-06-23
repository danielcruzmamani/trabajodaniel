#include <iostream>
#include <cmath>

int main() {
    int limiteMaximo;
    int base;

    // Solicitar al usuario el límite máximo y la base
    std::cout << "Ingrese el límite máximo: ";
    std::cin >> limiteMaximo;

    std::cout << "Ingrese la base: ";
    std::cin >> base;

    // Verificar que el límite máximo y la base sean positivos
    if (limiteMaximo <= 0 || base <= 0) {
        std::cout << "El límite máximo y la base deben ser valores positivos." << std::endl;
        return 0;
    }

    // Calcular y mostrar las potencias de la base menores que el límite máximo
    int potencia = 1;
    while (potencia < limiteMaximo) {
        std::cout << potencia << " ";
        potencia *= base;
    }

    return 0;
}

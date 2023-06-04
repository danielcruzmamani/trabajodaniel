#include <iostream>

int main() {
    double masa;
    double energia;

    // Lectura de la masa en gramos
    std::cout << "Ingrese la masa en gramos: ";
    std::cin >> masa;

    // Cálculo de la energía en ergios
    const double c = 2.997925e10;  // Velocidad de la luz en m/sg
    energia = masa * c * c;

    // Imprimir la cantidad de energía en ergios
    std::cout << "La cantidad de energía producida es: " << energia << " ergios" << std::endl;

    return 0;
}

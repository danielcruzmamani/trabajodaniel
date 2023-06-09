#include <iostream>

int main() {
    double yardas;
    double centimetros;

    // Lectura de la medida en yardas
    std::cout << "Ingrese la medida en yardas: ";
    std::cin >> yardas;

    // Conversión a centímetros
    centimetros = yardas * 91.44;

    // Imprimir el resultado
    std::cout << "Equivalente en centímetros: " << centimetros << std::endl;

    return 0;
}

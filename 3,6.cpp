#include <iostream>

int main() {
    double pies;
    double yardas, pulgadas, centimetros, metros;

    // Lectura de la medida en pies
    std::cout << "Ingrese la medida en pies: ";
    std::cin >> pies;

    // Conversión a yardas
    yardas = pies / 3;

    // Conversión a pulgadas
    pulgadas = pies * 12;

    // Conversión a centímetros
    centimetros = pulgadas * 2.54;

    // Conversión a metros
    metros = centimetros / 100;

    // Imprimir los resultados
    std::cout << "Equivalente en yardas: " << yardas << std::endl;
    std::cout << "Equivalente en pies: " << pies << std::endl;
    std::cout << "Equivalente en pulgadas: " << pulgadas << std::endl;
    std::cout << "Equivalente en centímetros: " << centimetros << std::endl;
    std::cout << "Equivalente en metros: " << metros << std::endl;

    return 0;
}

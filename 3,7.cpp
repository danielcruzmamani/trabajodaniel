#include <iostream>

int main() {
    int hectometros, decametros, metros;
    int perimetro;

    // Lectura de la longitud del perímetro en hectómetros, decámetros y metros
    std::cout << "Ingrese la longitud del perímetro en hectómetros: ";
    std::cin >> hectometros;

    std::cout << "Ingrese la longitud del perímetro en decámetros: ";
    std::cin >> decametros;

    std::cout << "Ingrese la longitud del perímetro en metros: ";
    std::cin >> metros;

    // Cálculo del perímetro en decímetros
    perimetro = hectometros * 100000 + decametros * 10 + metros / 10;

    // Imprimir el perímetro en decímetros
    std::cout << "El perímetro en decímetros es: " << perimetro << " decímetros" << std::endl;

    return 0;
}

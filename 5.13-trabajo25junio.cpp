#include <iostream>

int main() {
    std::cout << "Números de tres cifras cuya suma de los cuadrados de sus dígitos es igual al cociente de la división entera del número entre 3:" << std::endl;

    for (int num = 100; num <= 999; num++) {
        int cifra1 = num / 100;
        int cifra2 = (num / 10) % 10;
        int cifra3 = num % 10;

        int sumaCuadrados = cifra1 * cifra1 + cifra2 * cifra2 + cifra3 * cifra3;
        int cociente = num / 3;

        if (sumaCuadrados == cociente) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}

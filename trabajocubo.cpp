#include <iostream>

int main() {
    int contador = 0;  // Variable para llevar la cuenta de los números encontrados
    int numero = 1;    // Variable para almacenar los números

    int suma_cubos = 0;  // Variable para almacenar la suma de los cubos

    do {
        suma_cubos += numero * numero * numero;
        contador++;
        numero++;
    } while (contador < 4);

    std::cout << "La suma de los cubos de los 4 primeros números mayores a cero es: " << suma_cubos << std::endl;

    return 0;
}
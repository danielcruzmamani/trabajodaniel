#include <iostream>

int main() {
    int cantidad;
    int billetes_500, billetes_200, billetes_100, billetes_50, billetes_20, billetes_10, billetes_5;
    int monedas_2, monedas_1, monedas_50c, monedas_20c, monedas_10c, monedas_5c, monedas_2c, monedas_1c;

    // Lectura de la cantidad en euros
    std::cout << "Ingrese la cantidad en euros: ";
    std::cin >> cantidad;

    // Cálculo de los billetes y monedas
    billetes_500 = cantidad / 500;
    cantidad = cantidad % 500;

    billetes_200 = cantidad / 200;
    cantidad = cantidad % 200;

    billetes_100 = cantidad / 100;
    cantidad = cantidad % 100;

    billetes_50 = cantidad / 50;
    cantidad = cantidad % 50;

    billetes_20 = cantidad / 20;
    cantidad = cantidad % 20;

    billetes_10 = cantidad / 10;
    cantidad = cantidad % 10;

    billetes_5 = cantidad / 5;
    cantidad = cantidad % 5;

    monedas_2 = cantidad / 2;
    cantidad = cantidad % 2;

    monedas_1 = cantidad;

    monedas_50c = cantidad * 2;
    cantidad = cantidad % 1;

    monedas_20c = cantidad * 5;
    cantidad = cantidad % 1;

    monedas_10c = cantidad * 10;
    cantidad = cantidad % 1;

    monedas_5c = cantidad * 20;
    cantidad = cantidad % 1;

    monedas_2c = cantidad * 50;
    cantidad = cantidad % 1;

    monedas_1c = cantidad * 100;

    // Imprimir el cambio óptimo
    std::cout << "Billetes de 500 euros: " << billetes_500 << std::endl;
    std::cout << "Billetes de 200 euros: " << billetes_200 << std::endl;
    std::cout << "Billetes de 100 euros: " << billetes_100 << std::endl;
    std::cout << "Billetes de 50 euros: " << billetes_50 << std::endl;
    std::cout << "Billetes de 20 euros: " << billetes_20 << std::endl;
    std::cout << "Billetes de 10 euros: " << billetes_10 << std::endl;
    std::cout << "Billetes de 5 euros: " << billetes_5 << std::endl;
    std::cout << "Monedas de 2 euros: " << monedas_2 << std::endl;
    std::cout << "Monedas de 1 euro: " << monedas_1 << std::endl;
    std::cout << "Monedas de 50 céntimos: " << monedas_50c << std::endl;
    std::cout << "Monedas de 20 céntimos: " << monedas_20c << std::endl;
    std::cout << "Monedas de 10 céntimos: " << monedas_10c << std::endl;
    std::cout << "Monedas de 5 céntimos: " << monedas_5c << std::endl;
    std::cout << "Monedas de 2 céntimos: " << monedas_2c << std::endl;
    std::cout << "Monedas de 1 céntimo: " << monedas_1c << std::endl;

    return 0;
}

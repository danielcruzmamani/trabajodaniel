#include <iostream>
#include <cmath>

int main() {
    double radio;

    // Solicitar al usuario el radio de la esfera
    std::cout << "Ingrese el radio de la esfera: ";
    std::cin >> radio;

    // Verificar que el radio sea positivo
    if (radio <= 0) {
        std::cout << "El radio debe ser un valor positivo." << std::endl;
        return 0;
    }

    // Calcular el área y el volumen de la esfera
    double area = 4 * M_PI * pow(radio, 2);
    double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);

    // Mostrar el área y el volumen en la salida estándar
    std::cout << "El área de la esfera es: " << area << std::endl;
    std::cout << "El volumen de la esfera es: " << volumen << std::endl;

    return 0;
}

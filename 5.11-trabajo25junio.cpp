#include <iostream>

int main() {
    int n;
    int numero;
    int maximo = INT_MIN;  // Inicializar el máximo con el valor mínimo posible
    int minimo = INT_MAX;  // Inicializar el mínimo con el valor máximo posible
    int suma = 0;

    // Solicitar al usuario el valor de n
    std::cout << "Ingrese la cantidad de números (n): ";
    std::cin >> n;

    // Verificar que n sea mayor que 0
    if (n <= 0) {
        std::cout << "El valor de n debe ser mayor que 0." << std::endl;
        return 0;
    }

    // Solicitar al usuario los n números y realizar los cálculos
    std::cout << "Ingrese " << n << " números: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> numero;

        // Actualizar el máximo y el mínimo
        if (numero > maximo) {
            maximo = numero;
        }
        if (numero < minimo) {
            minimo = numero;
        }

        // Acumular la suma
        suma += numero;
    }

    // Calcular la media
    double media = static_cast<double>(suma) / n;

    // Mostrar los resultados
    std::cout << "El número más grande es: " << maximo << std::endl;
    std::cout << "El número más pequeño es: " << minimo << std::endl;
    std::cout << "La media de los números es: " << media << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int n;
    int suma = 0;

    // Solicitar al usuario el valor de n
    std::cout << "Ingrese un número positivo: ";
    std::cin >> n;

    // Verificar que n sea positivo
    if (n <= 0) {
        std::cout << "El número ingresado no es válido." << std::endl;
        return 0;
    }

    // Calcular la suma
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    // Mostrar el resultado
    std::cout << "La suma de los números del 1 al " << n << " es: " << suma << std::endl;

    return 0;
}

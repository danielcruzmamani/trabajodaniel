#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float masa1, masa2, distancia, fuerza;
    const float G = 6.673*pow(10, -8); // constante de gravitación universal en cm^3/gseg^2
    const float conversion = 980.665; // factor de conversión para pasar de gr.cm/seg^2 a dinas
    // 1 gr.cm/seg^2 = 980.665 dinas

    cout << "Ingrese la masa del primer cuerpo en gramos: ";
    cin >> masa1;
    cout << "Ingrese la masa del segundo cuerpo en gramos: ";
    cin >> masa2;
    cout << "Ingrese la distancia en centímetros entre los dos cuerpos: ";
    cin >> distancia;

    fuerza = G * masa1 * masa2 / pow(distancia, 2); // fórmula para calcular la fuerza gravitacional

    cout << "La fuerza gravitacional entre los dos cuerpos es: " << fuerza * conversion << " dinas." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Definir los precios para cada tipo de entrada
    const double precio_gnrl = 50.0;
    const double precio_pref = 80.0;
    const double precio_platea = 120.0;
    const double precio_vip = 160.0;

    // Pedir al usuario la ubicación y cantidad de entradas
    string ubicacion;
    int cantidad;
    cout << "Ingrese la ubicación (general, preferencial, platea o vip): ";
    cin >> ubicacion;
    cout << "Ingrese la cantidad de entradas: ";
    cin >> cantidad;

    // Definir el precio según la ubicación elegida
    double precio;
    switch (ubicacion[0]) {
        case 'g':
            precio = precio_gnrl;
            break;
        case 'p':
            precio = precio_pref;
            break;
        case 't':
            precio = precio_platea;
            break;
        case 'v':
            precio = precio_vip;
            break;
        default:
            cout << "Ubicación inválida." << endl;
            return 0;
    }

    // Si el usuario eligió entradas VIP, ofrecer opciones de bebida
    string bebida;
    if (ubicacion[0] == 'v') {
        cout << "Elija su bebida (gaseosa, cerveza o agua): ";
        cin >> bebida;
    }

    // Calcular y mostrar el total a pagar
    double total = precio * cantidad;
    cout << "Total a pagar: " << total << endl;

    return 0;
}
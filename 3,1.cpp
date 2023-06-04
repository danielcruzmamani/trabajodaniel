#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, h;
    cout << "Ingrese la longitud del primer lado del triángulo: ";
    cin >> a;
    cout << "Ingrese la longitud del segundo lado del triángulo: ";
    cin >> b;
    
    h = sqrt(a*a + b*b);
    
    cout << "La longitud de la hipotenusa es: " << h << endl;
    return 0;
}

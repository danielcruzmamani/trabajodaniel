#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f;
    cout << "Ingrese los coeficientes a, b, c, d, e y f (en ese orden) de un sistema linear de dos ecuaciones con dos incógnitas:" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    
    float det = a*d - b*c;
    
    if (det == 0) {
        cout << "El sistema no tiene solución única." << endl;
    } else {
        float x = (d*c - b*f) / det;
        float y = (a*f - e*c) / det;
        cout << "La solución del sistema es: x = " << x << ", y = " << y << endl;
    }
    
    return 0;
}

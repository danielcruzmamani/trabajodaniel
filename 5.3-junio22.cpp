5.3. Considerar el siguiente código de programa.
using namespace std;
int main(int argc, char *argv[])
{
int i = 1 , n ;
cin >> n;
while (i <= n)
if ((i % n) == 0)
++i;
cout << i << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
a) ¿Cuál es la salida si se introduce como v alor de n, 0?
b) ¿Cuál es la salida si se introduce como v alor de n, 1?
c) ¿Cuál es la salida si se introduce como v alor de n, 3?


//RESOLUCION:


A) En este primer caso cuando n toma el valor de 0, no se entra en el bucle while, ya que la i se ha inicializado a 1. Por
lo tanto se escribe 1.

B) Si n vale 1, se entra en el bucle una vez, ya que 1<=1. Como el resto de la división entera de 1 entre 1 es 0, se ejecuta la
sentencia ++i por lo que el valor de i es 2. Al tomar i el valor de 2, el bucle termina y la salida del programa es 2.

C) Al ser 3 el valor de n, se entra en el bucle pero nunca se ejecuta la sentencia ++i, ya que el resto de la división entera
de 1 entre 3 es siempre 1 que es distinto de 0. De esta forma el bucle nunca termina. Es un bucle infinito.
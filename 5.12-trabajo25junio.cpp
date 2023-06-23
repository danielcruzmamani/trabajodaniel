#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int i, n;
float suma, maximo;
do
{
cout << "valor maximo positvo ";
cin >> maximo;
} while (maximo <= 0);
for ( suma =0, i = 0; suma <= maximo;)
{
i++ ;
suma = suma + i * i - i- 2;
}
n = i;
cout << " valor de la suma = " << suma << endl;
cout <<" numero de terminos = " << n << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
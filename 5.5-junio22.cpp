5.5. ¿Cuál es la salida de este b ucle?
int i = 1 ;
while (i * i < 10)
{
int j = i;
while (j * j < 100)
{
cout << i + j << " ";
j *= 2;
}
i++;
cout << endl;
}
cout << "\n*****\n";


//RESOLUCION:


2 3 5 9
4 6 10
6 9
*****
/*
Ej. MI-5
Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos.
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Ingrese un numero: ";
    cin >> a;

    cout << "Ingrese un numero distinto al anterior: ";
    cin >> b;

    if (a == b)
    {
        cout << "Los numeros deben ser distintos, vuelva a ingresarlos";
    }
    else if (a > b)
    {
        cout << a << " es mayor que " << b;
    }
    else
    {
        cout << b << " es mayor que " << a;
    }

    return 0;
}

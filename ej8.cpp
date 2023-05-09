/*
Ej. MI-8: Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea: equilátero, isósceles o escálenos.
*/
#include <iostream>
using namespace std;

int main()
{
    int l1, l2, l3, tri;

    cout << "Ingrese el lado 1: ";
    cin >> l1;
    cout << "Ingrese el lado 2: ";
    cin >> l2;
    cout << "Ingrese el lado 3: ";
    cin >> l3;

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
    {
        if ((l1 == l2) && (l2 == l3))
        {
            cout << "Es un triangulo equilatero";
        }
        else if ((l1 == l2) || (l1 == l3) || (l2 == l3))
        {
            cout << "Es un triangulo isoceles";
        }
        else
        {
            cout << "Es un triangulo escaleno";
        }
    }
    else
    {
        cout << "No es un triangulo";
    }

    return 0;
}

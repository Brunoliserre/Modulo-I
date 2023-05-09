/*
Ej. MI-7: Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o “No forman triangulo”.
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, tri;

    cout << "Ingrese un valor: ";
    cin >> a;
    cout << "Ingrese un valor: ";
    cin >> b;
    cout << "Ingrese un valor: ";
    cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) // Desigualdad triangular
    {
        cout << "Forman triangulo";
    }
    else
    {
        cout << "No forman triangulo";
    }

    return 0;
}

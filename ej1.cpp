/*
Ej. MI-1 Dados dos valores enteros A y B, informar la suma, la resta y el producto.
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, suma, resta, mult, div;

    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un segundo numero: ";
    cin >> b;

    suma = a + b;
    resta = a - b;
    mult = a * b;
    div = a / b;

    cout << "La suma es: " << suma << "\n";
    cout << "La resta es: " << resta << "\n";
    cout << "La multiplicacion es: " << mult << "\n";
    cout << "La divison es: " << div << "\n";

    return 0;
}

/*
Ej. MI-4: A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    float quinta, resto, septima;

    cout << "Ingrese un numero: ";
    cin >> num;

    quinta = num / 5;
    resto = num % 5;
    septima = quinta / 7;

    cout << "La quinta parte del numero ingresado es: " << quinta << ", el resto de la division por 5 es: "
         << resto << ", y la septima parte de la quinta parte es: " << septima;

    return 0;
}

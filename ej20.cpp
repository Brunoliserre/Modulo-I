// Dados 10 valores informar el mayor

#include <iostream>

using namespace std;

int main()
{
    int a, comparador = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> a;

        if (a > comparador)
        {
            comparador = a;
        }
    }

    cout << "El valor mas grande es: " << comparador;

    return 0;
}

// Dados N y M números naturales, informar su producto por sumas sucesivas

#include <iostream>

using namespace std;

int main()
{
    int n, m, suma = 0;

    cout << "Ingrese un primer numero: ";
    cin >> n;

    cout << "Ingrese un segundo numero: ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        suma += n;
    }

    cout << "Su producto por sumas sucesivas es: " << suma;

    return 0;
}

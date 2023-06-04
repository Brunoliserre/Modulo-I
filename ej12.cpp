/*
Ej. MI-12 Informar los primeros 100 números naturales y su sumatoria
*/
#include <iostream>

using namespace std;

int main()
{
    int suma = 0;

    for (int i = 1; i < 101; i++)
    {
        cout << i << endl;
        suma += i;
    }

    cout << "La sumatoria de los primeros 100 numeros naturales es: " << suma;

    return 0;
}

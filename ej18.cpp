// Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5, dentro del conjunto de los números naturales.

#include <iostream>

using namespace std;

int main()
{
    int m, contador = 0, num = 1;
    cout << "Ingrese un valor: ";
    cin >> m;

    cout << "Los primeros " << m << " múltiplos de 3 que no sean de 5 son: " << endl;

    while (contador < m)
    {
        if (num % 3 == 0 && num % 5 != 0)
        {
            cout << num << endl;
            contador++;
        }
        num++;
    }

    return 0;
}

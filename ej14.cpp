// Dados 10 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10.

#include <iostream>

using namespace std;

int main()
{
    int a, suma100 = 0, suma10 = 0, contador100 = 0, contador10 = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> a;
        if (a > 100)
        {
            suma100 += a;
            contador100++;
        }
        else if (a < -10)
        {
            suma10 += a;
            contador10++;
        }
    }

    cout << "El promedio de numeros menores que -10 es: " << suma100 / contador100;
    cout << "El promedio de numeros mayores que 100 es: " << suma10 / contador10;

    return 0;
}

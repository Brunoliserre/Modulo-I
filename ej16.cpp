// Ingresar e informar valores, mientras que el valor ingresado no sea negativo. Informar la cantidad de valores ingresados.
#include <iostream>

using namespace std;

int main()
{
    int a, contador = 0;

    cout << "Ingrese un valor: ";
    cin >> a;

    while (a >= 0)
    {
        contador++;
        cout << "Ingrese otro valor: ";
        cin >> a;
    }

    cout << "Se han ingresado " << contador << " valores positivos";

    return 0;
}

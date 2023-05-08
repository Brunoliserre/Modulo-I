/*
Ej. MI-3: Dada un numero entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el dia, mes y año que representa.
*/
#include <iostream>

using namespace std;

int main()
{
    int fecha, anio, mes, dia;

    cout << "Ingrese la fecha en el formato AAAAMMDD: ";
    cin >> fecha;

    anio = fecha / 10000;
    cout << "El año es: " << anio << " \n";
    mes = (fecha / 100) - anio * 100;
    cout << "El mes es: " << mes << " \n";
    dia = fecha - (fecha / 100) * 100;
    cout << "El dia es: " << dia << " \n";

    return 0;
}

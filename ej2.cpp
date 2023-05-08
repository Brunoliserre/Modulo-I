/*
Ej. MI-2: Dada una terna de números naturales que representan al día, al mes y al año de una determinada fecha
          informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
*/
#include <iostream>

using namespace std;

int main()
{
    int anio, mes, dia, fecha;

    cout << "Ingrese el anio: ";
    cin >> anio;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;

    anio *= 10000;
    mes *= 100;
    fecha = anio + mes + dia;

    cout << "La fecha es: " << fecha;

    return 0;
}

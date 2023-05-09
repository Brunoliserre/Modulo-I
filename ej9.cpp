/*
Ej. MI-9: Dados un mes y el año correspondiente informar cuantos días tiene el mes.
*/
#include <iostream>
using namespace std;

int main()
{
    int anio, mes, bis, dias;

    cout << "Ingrese un año (AAAA): ";
    cin >> anio;

    cout << "Ingrese un mes (MM): ";
    cin >> mes;

    bis = (anio % 4 == 0) && (anio % 100 != 0) || (anio % 400 == 0);

    switch (mes)
    {
    case 2:
        if (bis == true)
            dias = 29;
        else
            dias = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dias = 30;
        break;
    default:
        dias = 31;
        break;
    }

    cout << "El mes ingresado tiene " << dias << " dias." << endl;

    return 0;
}

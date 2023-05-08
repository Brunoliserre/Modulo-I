/*
Ej. MI-6 Dadas dos fechas informar cual es la más reciente.
Determine cuales serían los datos de entrada y las leyendas a informar de acuerdo al proceso solicitado.
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, diaa, diab, mesa, mesb, anioa, aniob;

    cout << "Ingrese la primera fecha en el formato AAAAMMDD: ";
    cin >> a;

    cout << "Ingrese la segunda fecha en el formato AAAAMMDD: ";
    cin >> b;

    anioa = a / 10000;
    mesa = (a / 100) - anioa * 100;
    diaa = a - (a / 100) * 100;

    aniob = b / 10000;
    mesb = (b / 100) - aniob * 100;
    diab = b - (b / 100) * 100;

    if (a == b)
    {
        cout << "Has ingresado la misma fecha";
    }
    else if (a > b)
    {
        cout << "La primera fecha ingresada, correspondiente al dia " << diaa << " del mes " << mesa << " del año " << anioa << " es mas reciente";
    }
    else
    {
        cout << "La segunda fecha ingresada, correspondiente al dia " << diab << " del mes " << mesb << " del año " << aniob << " es mas reciente";
    }

    return 0;
}

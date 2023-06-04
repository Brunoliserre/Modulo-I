/*
    Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
    excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
        a) Cuántos empleados ganan menos $1.520.
        b) Cuántos ganan $1.520 o más pero menos de $2.780.
        c) Cuántos ganan $2.780 o más pero menos de $5.999.
        d) Cuántos ganan $5.999 o más.
*/
#include <iostream>

using namespace std;

int main()
{
    float sueldo;
    int contmin = 0, cont27 = 0, cont59 = 0, contmax = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldo;

        if (sueldo < 1520)
        {
            contmin++;
        }
        else if ((sueldo > 1520) && (sueldo < 2780))
        {
            cont27++;
        }
        else if ((sueldo > 2780) && (sueldo < 5999))
        {
            cont59++;
        }
        else if (sueldo > 5999)
        {
            contmax++;
        }
    }

    if (contmin > 1)
    {
        cout << contmin << " empleados ganan más de 1520$" << endl;
    }
    else
        cout << "Solo empleado gana más de 1520$" << endl;

    if (cont27 > 1)
    {
        cout << cont27 << " empleados ganan entre 1520$ y 2780$" << endl;
    }
    else
        cout << "Solo 1 empleado gana entre 1520$ y 2780$" << endl;

    if (cont59 > 1)
    {
        cout << cont59 << " empleados ganan entre 2.780$ y 5.999$ " << endl;
    }
    else
        cout << "Solo 1 empleado gana entre 2.780$ y 5.999$ " << endl;

    if (contmax > 1)
    {
        cout << contmax << " empleados ganan más de 5.999$" << endl;
    }
    else
        cout << "Solo 1 empleado gana más de 5.999$";

    return 0;
}

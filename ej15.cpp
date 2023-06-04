/*
    Se realiza una inspección en una fábrica de pinturas, y se detectaron 6 infracciones. De cada infracción se tomó nota de los siguientes datos:
    - Tipo de Infracción (1, 2, 3, ó 4)
    - Motivo de la infracción
    - Valor de la multa
    - Gravedad de la infracción (‘L’,‘M’, ‘G’)
    Se pide informar al final del proceso:
     Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
     La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.
*/

#include <iostream>

using namespace std;

int main()
{
    int infraccion, cantg = 0;
    float multal, multag, multam, valormulta;
    char gravedad;

    for (int i = 0; i < 6; i++)
    {
        cout << "Ingrese el tipo de infracción (1, 2, 3, 4): ";
        cin >> infraccion;
        cout << "Ingrese el valor de la multa: ";
        cin >> valormulta;
        cout << "Ingrese la gravedad de la Multa (G, L, M): ";
        cin >> gravedad;

        if ((gravedad == 'G') && (infraccion == 3 || infraccion == 4))
        {
            cantg++;
        }

        if (gravedad == 'L')
        {
            multal += valormulta;
        }
        else if (gravedad == 'G')
        {
            multag += valormulta;
        }
        else if (gravedad == 'M')
        {
            multam += valormulta;
        }
    }

    if ((cantg > 3))
    {
        cout << "Clausurar fábrica";
    }
    else
        cout << "Los valores de las multa tipo 'L' son: " << multal,
            cout << "Los valores de las multa tipo 'G' son: " << multag,
            cout << "Los valores de las multa tipo 'M' son: " << multam;

    return 0;
}

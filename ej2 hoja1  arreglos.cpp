//ej2 hoja1 arreglos

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	int n1;

	do
	{
		double *Pesos;
		Pesos = new double[10];

		double sumadepesos = 0.0;
		double promedio;

		int delgado = 0;
		int mediano = 0;
		int grueso = 0;

		double max = 0;


		for (int i = 0; i < 10; i++)
		{
			do
			{
				cout << " Ingrese el peso de la persona " << i + 1 << ": ";
				cin >> Pesos[i];

			} while (Pesos[i] < 0);

			sumadepesos = sumadepesos + Pesos[i];

			if (Pesos[i] > max)
			{
				max = Pesos[i];
			}
			if (Pesos[i] < 53)
			{
				delgado++;
			}
			if (Pesos[i] >= 53 && Pesos[i] <=60)
			{
				mediano++;
			}
			if (Pesos[i] >60)
			{
				grueso++;
			}

		}

		promedio = (sumadepesos) / 10;
		cout << endl;
		cout << " El peso promedio es " << promedio << " kilos " << endl;
		cout << " El mayor peso es " << max << " kilos " << endl;
		cout << " El n"<< char(163) <<"mero de personas cuya contextura es delgada es " << delgado << endl;
		cout << " El n"<< char(163) <<"mero de personas cuya contextura es mediana es " << mediano << endl;
		cout << " El n"<< char(163) <<"mero de personas cuya contextura es gruesa es " << grueso << endl;

		cout << endl;

		delete[]Pesos;

		do
		{
			cout << " De nuevo [1] o desea salir [2]: ";
			cin >> n1;
			cout << endl;

		} while (n1 < 1 || n1 > 2);


	} while (n1 == 1);


}
//ej1 hoja1 arreglos

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace System;
using namespace std;

int main()
{
	int n1;

	do
	{
		int n;
		double *Edades;
		Edades = new double[n];

		int ub; //ubicación de la menor edad
		int edadbuscar;
		int confirmación;
		
		int entre3050;

		double min = 110;

		do
		{
			cout << " Ingrese el n" << char(163) <<"mero de personas: ";
			cin >> n;

		} while (n < 0 || n >100);

		do
		{
			cout << " Ingrese la edad a buscar: ";
			cin >> edadbuscar;

		} while (n < 0 || n >110);

		srand(time(NULL));
		

		for (int i = 0; i < n; i++)
		{

			Edades[i] = (rand() % 110);
			cout << " Edad de la persona " << i + 1 << ": " << Edades[i] << endl;

			if (Edades[i] < min)
			{
				min = Edades[i];
				ub = i;
			}
			if (Edades[i] == edadbuscar)
			{
				confirmación = 1;
			}
			if (Edades[i] != edadbuscar)
			{
				confirmación = 0;
			}
			if (Edades[i] >= 30 && Edades[i] <= 50)
			{
				entre3050++;
			}

		}

		cout << endl;
		cout << " La menor edad es " << min << " y es la edad N"<<char (167)<<" " <<ub + 1 << endl;
		cout << " El n" << char(163) << "mero de personas con edades entre 30 y 50 es " << entre3050 << endl;
		if (confirmación == 1)
		{
			cout << " La edad solicitada a buscar ( " << edadbuscar << " ) s" << char(161) << " se encuentra en la lista." << endl;
		}
		if (confirmación == 0)
		{
			cout << " La edad solicitada a buscar ( " << edadbuscar << " ) no se encuentra en la lista." << endl;
		}
		cout << endl;

		delete[]Edades;

		do
		{
			cout << " De nuevo [1] o desea salir [2]: ";
			cin >> n1;
			cout << endl;

		} while (n1 < 1 || n1 > 2);


	} while (n1 == 1);

}
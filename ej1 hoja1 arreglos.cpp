//ej1 hoja1 arreglos

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
		double *Notas;
		Notas = new double[6];

		double sumadenotas = 0.0;
		double promedio;

		double min = 20;


		for (int i = 0; i < 6; i++)
		{
			do
			{
				cout << " Ingrese la nota " << i + 1 << ": ";
				cin >> Notas[i];

			} while (Notas[i] < 0);

			sumadenotas = sumadenotas + Notas[i];

			if (Notas[i] < min)
			{
				min = Notas[i];
			}

		}

		promedio = (sumadenotas - min) / 6;
		cout << endl;
		cout << " El promedio del alumno es " << promedio << endl;
		cout << endl;

		delete[]Notas;

		do
		{
			cout << " De nuevo [1] o desea salir [2]: ";
			cin >> n1;
			cout << endl;

		} while (n1 < 1 || n1 > 2);


	} while (n1 == 1);
}
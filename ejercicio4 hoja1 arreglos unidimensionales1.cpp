//ej4 hoja1 arreglos unidimensionales

#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;


int main()
{
	int n;

	int *notas = new int[n];
	int max = 0;
	int min = 20;
	double sumadenotas = 0;
	double promedio;
	int number = 0;
	int rep = 0;

	do
	{
		cout << " Ingrese el n" << char(163) << "mero de alumnos: ";
		cin >> n;

	} while (n < 0);

	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << " Ingrese la nota del alumno " << i + 1 << ": ";
			cin >> notas[i];

		} while (notas[i] < 0 || notas[i]>20);

		sumadenotas = sumadenotas + notas[i];
	}
	for (int i = 0; i < n; i++)
	{
		rep = 0;
		for (int j = 0; j < n; j++)
		{
			if (notas[i] == notas[j])
			{
				rep++;
			}
			if (rep >= 2 || rep > 2)
			{
				number = notas[i];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (notas[i] > max)
		{
			max = notas[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (notas[i] < min)
		{
			min = notas[i];
		}
	}

	promedio = sumadenotas / n;

	cout << endl;
	cout << " El promedio de notas es " << promedio << endl;
	cout << " La moda es " << number << endl;
	cout << " La m" << char(160) << "xima nota es " << max << endl;
	cout << " La m" << char(161) << "nima nota es " << min << endl;
	cout << endl;


	delete[]notas;

	system("pause");

}
//ej6 hoja1 arreglos

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace System;
using namespace std;

int Imp(int *montos, int n) 
{
	int imp= 0;

	for (int i = 0; i < n; i++)
	{

		if (montos[i] % 2 != 0)

		{
			imp++;
		}

	}

	return imp;

}

int main()
{

	int n;
	int *Monto;
	Monto = new int[n];

	int imp = 0;

	int entre100300 = 0;


	do
	{
		cout << " Ingrese el n" << char(163) << "mero de montos: ";
		cin >> n;

	} while (n < 0 || n >200);

	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{

		Monto[i] = 25 + rand() % 500;
		cout << " Monto " << i + 1 << ": " << Monto[i] << endl;

		if (Monto[i] > 100 && Monto[i] < 300)
		{
			entre100300++;
		}
		
	}

	cout << endl;
	cout << "Montos ordenados ascendentemente: " << endl;
	cout << " ================================ " << endl;

	int aux; //un temporal que ayuda al intercambio

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)

			if (Monto[i] > Monto[j])

			{
				aux = Monto[i];

				Monto[i] = Monto[j];

				Monto[j] = aux;
			}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Monto " << i + 1 << ": " << Monto[i] << endl;
	}
	
	cout << endl;
	cout << "N" << char(163) << "mero de personas que gastaron entre 100 y 300 soles en bebidas: " << entre100300<< endl;
	cout << "Cantidad de montos que tienen asociadas una cantidad impar: " << Imp(Monto, n) << endl;
	cout << endl;

	delete[]Monto;

	system("pause");

}
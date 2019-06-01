//ej5 hoja1 arreglos unidimensionales

#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;


int main() {
	int *Notas;
	int N;
	Notas = new int[N];

	int cero = 0;
	int veinte = 0;
	int apro = 0;
	int desapro = 0;

	do
	{
		cout << " Ingrese el n" << char(163) << "mero de alumnos: ";
		cin >> N;

	} while (N > 40);

	for (int i = 0; i < N; i++)
	{
		do
		{
			cout << " Ingrese la nota " << i + 1 << ": ";
			cin >> Notas[N];

		} while (Notas[N] < 0);

		if (Notas[N] == 0)
		{
			cero++;
		}
		if (Notas[N] == 20)
		{
			veinte++;
		}
		if (Notas[N] < 13)
		{
			desapro++;
		}
		if (Notas[N] >= 13)
		{
			apro++;
		}

	}
	cout << endl;
	cout << " La cantidad de personas que obtuvieron 00 es " << cero << endl;
	cout << " La cantidad de personas que obtuvieron 20 es " << veinte << endl;
	cout << " La cantidad de personas aprobadas es " << apro << endl;
	cout << " La cantidad de personas desaprobadas es " << desapro << endl;
	cout << endl;

	delete[]Notas;
	system("pause");

}
//ej4 hoja1 arreglos unidimensionales

#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;


int main() {
	int *Notas;
	int N;
	Notas = new int[N];
	int sumadenotas = 0;
	double promedio;
	double max = 0;
	double min = 20;

	do
	{
		cout << " Ingrese el n" << char(163) << "mero de notas a promediar: ";
		cin >> N;

	} while (N < 0);

	for (int i = 0; i < N; i++)
	{
		do
		{
			cout << " Ingrese la nota " << i + 1 << ": ";
			cin >> Notas[N];

		} while (Notas[N] < 0);

		sumadenotas = sumadenotas + Notas[N];

		if (Notas[N] > max)
		{
			max = Notas[N];
		}
		if (Notas[N] < min)
		{
			min = Notas[N];
		}
	}
	promedio = sumadenotas / N;

	cout << endl;
	cout << " El promedio de las notas es :" << promedio << endl;
	cout << " La nota m" << char(160) << "xima es :" << max << endl;
	cout << " La nota m" << char(161) << "nima es :" << min << endl;
	cout << endl;

	delete[]Notas;
	system("pause");

}
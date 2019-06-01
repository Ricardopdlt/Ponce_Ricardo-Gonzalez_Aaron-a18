//ej 8 hoja1 arreglos

#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace System;
using namespace std;


void contador(int *notas, int numN) {



	int aux; //un temporal que ayuda al intercambio

	for (int i = 0; i < numN - 1; i++)

	{

		for (int j = i + 1; j < numN; j++)

			if (notas[i] > notas[j])

			{

				aux = notas[i];

				notas[i] = notas[j];

				notas[j] = aux;

			}

	}


	int number = notas[0];
	int num = number;
	int count = 1;
	int countNum = 1;


	for (int i = 1; i < numN + 1; i++)
	{

		if (notas[i] == number)
		{ // count occurrences of the current number

			++count;
		}

		else
		{

			if (notas[i] != number)

			{

				countNum = count;

				num = number;

			
				cout << " Cantidad de " << num << " : " << count << endl;

			}

			count = 1;

			number = notas[i];

		}

	}

	return;

}



int main()
{

	int *notas;

	int n;

	int numer = 0;
	int rep = 0;

	do
	{
		cout << " Ingrese n" << char(163) << "mero de alumnos: ";
		cin >> n;

	} while (n < 0);

	notas = new int[n];


	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << " Ingrese nota del alumno " << i + 1 << " : ";
			cin >> notas[i];

		} while (notas[i] < 0 || notas[i]>20);

	}

	cout << endl;
	contador(notas, n);

	for (int i = 0; i < n; i++)
	{
		rep = 0;
		for (int j = 0; j < n; j++)
		{
			if (notas[i] == notas[j])
			{
				rep++;
			}
			if (rep >= 2 || rep >2)
			{
				numer = notas[i];
			}
		}
	}

	cout << endl;
	cout << " La nota que m" << char(160) << "s se repite es: " << numer << endl;
	cout << endl;



	delete notas;

	system("pause");

}
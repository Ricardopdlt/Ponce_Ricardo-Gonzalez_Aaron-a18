//Arreglos.Ejercicio7
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void Multiplicacion(long long num1)
{
	int m;
	cout << "Multiplicacion de un numero grande: " << endl;
	do
	{
		cout << "Ingrese un digito: "; cin >> m;
	} while (m < 0 || m > 9);
	cout << endl;

	cout << "Multiplicacion: " << m << " x " << num1 << " = " << (m)*(num1) << endl;
	return;
}

void SumaNumGrandes(long long num1, long long num2)
{
	cout << "Sumatoria de dos numeros grandes: " << endl;
	cout << "La suma de los dos numeros: " << num1 << " + " << num2 << " = " << (num1)+(num2) << endl;
	return;
}

long long MostrarNumGrande()
{
	long long MuestraNumGrande;
	cout << "Mostrar un numero grande:" << endl;
	MuestraNumGrande = 100000000000 + rand() % (1000000000000 - 100000000000);

	cout << "Numero de 12 digitos aleatorio: " << MuestraNumGrande << endl;
	return MuestraNumGrande;
}

long long LeerNumeroGrande()
{
	int *n;
	long long num;
	long long mod = 10;
	long long div = 1;

	cout << "Leer Numero Grande" << endl;
	do
	{
		cout << "Inserte numero de 12 digitos: "; cin >> num;
	} while (num < 100000000000 || num > 999999999999);

	n = new int[12];
	for (int i = 0; i < 12; i++)
	{
		n[i] = (num % mod) / div;
		mod = mod * 10;
		div = div * 10;
	}
	cout << endl;

	for (int i = 11; i >= 0; i--)
	{
		cout << "Digito " << i + 1 << " = " << n[i] << endl;
	}
	delete n;
	return num;
}

int main()
{
	long long num1, num2;
	//Leer numero grande y almacenarlo en un arreglo como el mostrado anteriormente
	num1 = LeerNumeroGrande();
	cout << endl;

	//Mostrar un numero grande
	num2 = MostrarNumGrande();
	cout << endl;

	//Sumar dos numeros grandes
	SumaNumGrandes(num1, num2);
	cout << endl;

	//Multiplicar un numero grande por un digito
	Multiplicacion(num1);
	cout << endl;

	_getch();
}
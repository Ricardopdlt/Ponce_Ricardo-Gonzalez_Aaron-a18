//Arreglos.Ejercicio9
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int INVERTIR(int num)
{
	int d1;
	int d2;
	int d3;
	int invertido;

	//1° Evaluar unidad
	if (num >= 0 && num <= 9)
	{
		invertido = num;
	}

	//2° Evaluar decena
	if (num >= 10 && num <= 99)
	{
		d1 = (num % 10) * 10;
		d2 = num / 10;
		invertido = d1 + d2;
	}

	//3° Evaluar centena
	if (num >= 100 && num <= 199)
	{
		d1 = (num % 10) * 100;
		d2 = ((num % 100) / 10) * 10;
		d3 = num / 100;
		invertido = d1 + d2 + d3;
	}
	return invertido;
}

int main()
{
	//Variables
	int *num;
	int invertido, a = 0;
	num = new int[10];

	//Logica
	for (int x = 0; x < 10; x++)
	{
		do {
			cout << " Datos del vector " << x + 1 << " : ";
			cin >> num[x];
		} while (num < 0 || num[x] >= 200);

		invertido = INVERTIR(num[x]);
		if (num[x] == invertido)
		{
			a++;
		}
	}
	cout << endl;

	//Salida de Datos
	cout << " En el programa se han dectado " << a << " n" <<char (163) <<"mero(s) cap" <<char(161)<<"cua(s)" << endl;
	cout << endl;

	delete num;

	system("pause");
}
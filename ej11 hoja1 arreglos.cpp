//Arreglos.Ejercicio11
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void Imprimir_Aprobado(int num, int curva)
{
	//Analizar notas
	int *Vnotas;
	Vnotas = new int[num];
	for (int x = 0; x < num; x++)
	{
		do {
			cout << "Nota del alumno " << x + 1 << ":" << endl;
			cin >> Vnotas[x];
		} while (Vnotas[x] < 0 || Vnotas[x] > 20);
	}
	cout << endl;

	//Analizar alumnos aprobados
	cout << "Alumnos aprobados: " << endl;
	for (int y = 0; y < num; y++)
	{
		if ((Vnotas[y] + curva) >= 13)
		{
			if ((Vnotas[y] + curva) > 20)
			{
				cout << "Alumno " << y + 1 << ": " << 20 << endl;
			}
			else
			{
				cout << "Alumno " << y + 1 << ": " << Vnotas[y] + curva << endl;
			}
		}
	}
	return;
}

//Curva a aplicar a las notas 
int Aumenta_Curva()
{
	int curva;
	do
	{
		cout << "Insertar curva: "; cin >> curva;
	} while (curva < 0 || curva > 5);
	return curva;
}

//Generacion de las N notas del arreglo Vnotas
void Genera_Vector()
{
	int num;
	int curva;

	do {
		cout << "Insertar numero de elementos: "; cin >> num;
	} while (num < 1);
	curva = Aumenta_Curva();
	Imprimir_Aprobado(num, curva);
	return;
}

void main()
{
	Genera_Vector();
	_getch();
}
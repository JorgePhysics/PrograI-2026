// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

//Realice un programa que solicite de la entrada un entero del 1 al 10 y muestre en la salida su tabla de multiplicar.

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Ingrese un numero entero del 1 al 10: ";
	cin >> numero;
	
	if(numero>=1 && numero<=10)
	{
		for (int i=1; i<=10; i++)
		{
			cout << numero << "Tabla de multiplicacion" << i << "=" << numero*i << endl;
		}
	}
	else
	{
		cout << "Numero fuera de rango" << endl;
	}
	
	return 0;
}



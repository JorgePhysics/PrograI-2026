// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026


//Realice un programa que lea un valor entero y determine si se trata de un número par o impar.

#include <iostream>

using namespace std;

int main()
{
	int numero;
	
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	
	if (numero % 2==0)
	{
		cout << "El numero es par"<<endl;
	}
	else
	{
		cout << "El numero es impar"<<endl;
	}
	
	return 0;
}
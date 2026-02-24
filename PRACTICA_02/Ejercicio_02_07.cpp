// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

/*
  Crear un algoritmo que indique si un número es perfecto o no. Se dice que
  un número es perfecto si la suma de sus divisores es igual al número. Por
  ejemplo, 6 tiene como divisores 1, 2, y 3, entonces 1+2+3=6; el número 6 es
  perfecto. Si el número es 9, tiene como divisores 1, 3, entonces 1+3=4; no
  es perfecto.
*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	int suma=0;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	for (int i=1; i<numero; i++)
	{
		if (numero % i==0)
		{
			suma += i;
		}
	}
	if (suma == numero)
	{
		cout << "Es un numero perfecto"<<endl;
	}
	else
	{
		cout << "No es un numero perfecto"<<endl;
	}	
	
	return 0;
}

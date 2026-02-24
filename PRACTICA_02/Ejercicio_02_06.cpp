// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

/*
  Escriba un programa para leer dos valores enteros distintos entre sí, de tal
  forma que si el primer número es mayor al segundo, genere una serie
  descendente, caso contrario, muestre una serie ascendente; el factor de
  incremento o decremento es la unidad.
*/

#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	
	if (a > b)
	{
		for (int i=a; i>=b; i--)
		{
			cout << i << "  ";
		}
	}
	else
	{
		for (int i=a; i<=b; i++)
		{
			cout << i << "  ";
		}
	}
	
	cout << endl;
	
	return 0;
	
}

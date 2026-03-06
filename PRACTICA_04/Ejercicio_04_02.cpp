// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Determinación de Mayoría: Cree una función que reciba tres números enteros y devuelva el mayor de ellos. El programa principal debe capturar los tres valores y mostrar el resultado.

#include <iostream>

using namespace std;

int MayorNumero(int a, int b, int c);

int main()
{
	int a;
	int b;
	int c;
	
	cout << "Ingrese un numero: ";
	cin >> a;
	cout << "Ingrese un numero: ";
	cin >> b;
	cout << "Ingrese un numero: ";
	cin >> c;
	
	cout << "El mayor numero de los tres numeros es: "<<MayorNumero(a, b, c)<<endl;
	
	return 0;
}

int MayorNumero(int a, int b, int c)
{
	int mayor = a;
	
	if(b>mayor)
	{
		mayor = b;
	}
	if(c>mayor)
	{
		mayor = c;
	}
	
	return mayor;
}

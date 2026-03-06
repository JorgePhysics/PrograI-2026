// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Sumatoria de Naturales: Realice una función que reciba un número entero positivo N y calcule la suma de todos los números desde 1 hasta N mediante un ciclo.

#include <iostream>

using namespace std;

int Sumatoria(int numero);

int main()
{
	int numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	cout << "La suma es: "<<Sumatoria(numero)<<endl;
	
	return 0;
}

int Sumatoria(int numero)
{
	int suma = 0;
	
	for(int i=1; i<=numero; i++)
	{
		suma += i;
	}
	
	return suma;
}

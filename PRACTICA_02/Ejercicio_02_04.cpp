// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>

using namespace std;

int main()
{
	int numero;
	long long sumaTotal=0;
	long long factorial=1;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	for (int i=1; i<=numero; i++)
	{
		factorial *= i;
		sumaTotal += factorial;
	}
	
	cout << "La suma es: "<<sumaTotal<<endl;
	
	return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

//Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>

using namespace std;

int main()
{
	int numero;
	int suma=0;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	for (int i=1; i<=numero; i++)
	{
		suma+= i;
		cout << "El valor es: "<<suma<<endl;
	}
	
	return 0;
}

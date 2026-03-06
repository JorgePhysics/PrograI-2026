// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Verificación de Paridad: Diseñe una función booleana que determine si un número entero es par. La función debe retornar true si es par y false en caso contrario

#include <iostream>

using namespace std;

bool esPar(int numero);

int main()
{
	int numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	cout<<"El numero es par: "<<boolalpha<<esPar(numero)<<endl;
	
	return 0;
}

bool esPar(int numero)
{
	if(numero%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Contador de Dígitos: Desarrolle una función que reciba un número entero positivo y devuelva la cantidad de dígitos que lo componen (utilizando divisiones sucesivas entre 10).

#include <iostream>

using namespace std;

int ContarDigitos(int numero);

int main()
{
	int numero;
	
	cout << "Ingrese un numero positivo: ";
	cin >> numero;
	
	cout << "La cantidad de digitos es: "<<ContarDigitos(numero)<<endl;
	
	return 0;
}

int ContarDigitos(int numero)
{
	int contador = 0;
	
	if(numero==0)
	{
		return 1;
	}
	
	while(numero>0)
	{
		numero /= 10;
		contador++;
	}
	
	return contador;
}

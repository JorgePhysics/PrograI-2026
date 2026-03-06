// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Conversión de Divisas: Escriba una función que convierta un monto dado en bolivianos a dólares, recibiendo como parámetros la cantidad y el tipo de cambio oficial y paralelo.

#include <iostream>

using namespace std;

float ConversionOficial(float bolivianos, float oficial);
float ConversionParalelo(float bolivianos, float paralelo);

int main()
{
	system("cls");
	float bolivianos;
	float oficial;
	float paralelo;
	
	cout << "Ingrese el monto a cambiar: ";
	cin >> bolivianos;
	cout << "Ingrese el valor del tipo de cambio oficial: ";
	cin >> oficial;
	cout << "Ingree el valor del tipo de cambio paralelo: ";
	cin >> paralelo;
	
	cout << "El monto dolares oficial es: "<<ConversionOficial(bolivianos, oficial)<<endl;
	cout << "El monto dolares paralelo es: "<<ConversionParalelo(bolivianos, paralelo)<<endl;
	
	return 0;
}

float ConversionOficial(float bolivianos, float oficial)
{
	float montoOficial;
	
	montoOficial = bolivianos/oficial;
	
	return montoOficial;
}
float ConversionParalelo(float bolivianos, float paralelo)
{
	float montoParalelo;
	
	montoParalelo = bolivianos/paralelo;
	
	return montoParalelo;
}

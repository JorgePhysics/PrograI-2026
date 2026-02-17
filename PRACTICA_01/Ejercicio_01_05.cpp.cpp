// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026

//Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float cateto1, cateto2, hipotenusa=0;
	
	cout << "Ingrese el valor del primer cateto: ";
	cin >> cateto1;
	cout << "Ingrese el valor del segundo cateto: ";
	cin >> cateto2;
	
	float suma = pow(cateto1, 2) + pow(cateto2, 2);
	
	hipotenusa = pow(suma, 0.5);
	cout << "La hipotenusa del triangulo es: "<<hipotenusa<<endl;
	
	return 0;
}


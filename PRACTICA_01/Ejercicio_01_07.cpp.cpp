// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026


//Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].

#include <iostream>

using namespace std;

int main()
{
	int edad=0;
	
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	if(edad>=18 && edad<=25)
	{
		cout << "La edad esta en el rango [18-25]"<<endl;
	}
	else
	{
		cout << "La edad no esta en el rango [18-25]"<<endl;
	}
	
	return 0;
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026

/*
    Realice un programa que lea de la entrada estándar los siguientes datos de
    una persona:
    a. Edad: dato de tipo entero.
    b. Sexo: dato de tipo carácter.
    c. Altura en metros: dato de tipo real.
    d. Tras leer los datos, el programa debe mostrarlos en la salida
    estándar. 
*/

#include <iostream>

using namespace std;

int main()
{
	int edad;
	char sexo;
	double altura;
	
	cout << "Ingrese la edad: "<<endl;
	cin >>edad;
	cout << "Ingrese el sexo: "<<endl;
	cin >>sexo;
	cout << "Ingrese la altura en metros: "<<endl;
	cin >>altura;
	
	cout << "\nDatos Ingresados: \n"<<endl;
	cout << "Edad: "<<edad<<endl;
	cout << "Sexo: "<<sexo<<endl;
	cout << "Altura: "<<altura<<" metros"<<endl;
	return 0;
}


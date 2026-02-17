// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026

//Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4;
	
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Ingrese el tercer numero: ";
	cin >> num3;
	cout << "Ingrese el cuarto numero: ";
	cin >> num4;
	
	if(num4==num1 || num4==num2 || num4==num3)
	{
		cout << "El cuarto numero coincide con uno de los anteriores"<<endl;
	}
	else
	{
		cout << "El cuarto numero no coincide con uno de los anteriores"<<endl;
	}
	
	return 0;
}

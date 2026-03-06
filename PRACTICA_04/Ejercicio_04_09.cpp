// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Promedio de Calificaciones: Implemente una función que reciba dos notas reales y devuelva el promedio aritmético de ambas.

#include <iostream>

using namespace std;

float CalcularPromedio(float nota1, float nota2);

int main()
{
	float nota1;
	float nota2;
	
	cout << "Ingrese la primera nota: ";
	cin >> nota1;
	cout << "Ingrese la segunda nota: ";
	cin >> nota2;
	
	cout << "El promedio es: "<<CalcularPromedio(nota1, nota2)<<endl;
	
	return 0;
}

float CalcularPromedio(float nota1, float nota2)
{
	float promedio = 0;
	
	promedio = (nota1+nota2)/2;
	
	return promedio;
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026

//La calificación final de un estudiante es el promedio de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un
// programa que lea las tres notas del alumno y escriba su nota final. 

#include <iostream>

using namespace std;

int main()
{
	float practica, teoria, participacion, notafinal;
	
	cout << "Ingrese la nota de practicas: ";
	cin >> practica;
	cout << "Ingrese la nota teorica: ";
	cin >> teoria;
	cout << "Ingrese la nota de participacion: ";
	cin >> participacion;
	
	notafinal = (practica*0.30) + (teoria*0.60) + (participacion*0.10);
	cout << "La nota final es: "<<notafinal<<endl;
	
	return 0; 
}
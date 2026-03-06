// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Cálculo de Área Geométrica: Desarrolle una función que reciba la base y la altura de un triángulo y devuelva su área (Area= (base x altura) / 2).

#include <iostream>

using namespace std;

float CalcularAreaTriangulo(float base, float altura);

int main()
{
	system("cls");
	float base;
	float altura;
	
	cout << "Ingrese la base del triangulo: ";
	cin >> base;
	cout << "Ingrese la altura del triangulo: ";
	cin >> altura;
	
	cout << "El area del triangulo es: "<<CalcularAreaTriangulo(base, altura)<<endl;
	
	return 0;
}

float CalcularAreaTriangulo(float base, float altura)
{
	float area;
	
	area = base*altura/2;
	
	return area;
}

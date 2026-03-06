// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Volumen de un Cilindro: Implemente una función que reciba el radio y la altura de un cilindro y retorne su volumen (V=π * r * r * h). Utilice una constante para el valor de π.

#include <iostream>

using namespace std;

const double PI = 3.1415926535;

double CalcularVolumenCilindro(double radio, double altura);

int main()
{
	system("cls");
	double radio;
	double altura;
	
	cout << "Ingrese el radio del cilindro: ";
	cin >> radio;
	cout << "Ingrese la altura del cilindro: ";
	cin >> altura;
	
	cout << "El volumen del cilindro es: "<<CalcularVolumenCilindro(radio, altura)<<endl;
	
	return 0;
}

double CalcularVolumenCilindro(double radio, double altura)
{
	double volumen;
	
	volumen = PI*radio*radio*altura;
	
	return volumen;
}

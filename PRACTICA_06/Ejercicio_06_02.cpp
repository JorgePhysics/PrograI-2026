// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

// Crea una función llamada “CalcularVolumen” que reciba un parámetro radio y un parámetro altura. El parámetro altura debe tener un valor por defecto de 10. Calcula y devuelve el volumen de un cilindro (usando la fórmula: V=π×r2×hV)

#include <iostream>
#include <cmath>

using namespace std;

double CalcularVolumen(double radio, double altura=10);

int main()
{
	int radio=0;
	int volumen=0;
	
	cout << "Ingrese el valor del radio: ";
	cin >> radio;
	
	volumen = CalcularVolumen(radio);
	
	cout << "El volumen del cilindro es: " << volumen << endl;
	
	return 0;
}

double CalcularVolumen(double radio, double altura)
{
	const double PI = 3.14159265;
	double volumen=0;
	
	volumen = PI * pow(radio, 2) * altura;
	
	return volumen;
}

 
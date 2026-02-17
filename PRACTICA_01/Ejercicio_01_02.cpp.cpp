// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026

//Escribir un programa que de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA (IVA=13%). 

#include <iostream>

using namespace std;

int main()
{
	double precio;
	double preciofinal;
	const double IVA=0.13; //const sirve para indicar que el valor de la variables es constante y no cambie durante la ejecucion
	
	cout << "Ingrese el precio del producto: "<<endl;
	cin >>precio;
	preciofinal= precio + (precio * IVA);
	cout << "El precio final es: "<<preciofinal<<endl;
	return 0; 
}
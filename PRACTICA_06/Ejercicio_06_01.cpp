// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

//Crea una función llamada “IntercambiarValores” que reciba dos parámetros por referencia y los intercambie entre sí. Imprime los valores antes y después de la llamada a la función.

#include <iostream>

using namespace std;

void IntercambiarValores(int &a, int &b);
void imprimir(int a, int b);

int main()
{
	cout << "Ingrese 2 numeros: " ;
	int a, b;
	cin >> a >> b;
	cout << "Antes de intercambiar" << endl;
	imprimir(a, b);
	IntercambiarValores(a, b);
	cout << "Despues de cambiar" << endl;
	imprimir(a, b);
	
	return 0;
}

void IntercambiarValores(int &a, int &b)
{
	int aux = a;
	a = b;
	b = aux;
}

void imprimir(int a, int b)
{
	cout << "La variable a: " << a << endl;
	cout << "La variable b: " << b << endl;
}

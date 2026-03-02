// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557
// Carrera: Ing. Mecatronica
// Fecha creación: 27/02/2026

//Genera un número aleatorio entre 1 y 10 y calcula su factorial.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int numero=rand() % 10 + 1;
	long long factorial=1;
	
	for (int i=1; i<=numero; i++)
	{
		factorial*= i;
	}
	
	cout << "Numero generado: "<<numero<<endl;
	cout << "Factorial es: "<<factorial<<endl;
	
	return 0;
}



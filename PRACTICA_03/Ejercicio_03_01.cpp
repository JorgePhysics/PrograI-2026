// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557
// Carrera: Ing. Mecatronica
// Fecha creación: 27/02/2026

//Simular el lanzamiento de un dado n veces y determinar la frecuencia de repetición de las caras pares.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int numero;
	int cara;
	int pares;
	
	cout << "Ingrese la cantidad de lanzamientos: ";
	cin >> numero;
	
	for (int i=0; i<numero; i++)
	{
		cara = rand() % 6 + 1;
		
		if (cara%2==0)
		{
			pares++;
		}
	}
	
	cout << "Frecuencia de caras pares "<<pares<<" de "<<numero<<" lanzamientos"<<endl;
	
	return 0;
}


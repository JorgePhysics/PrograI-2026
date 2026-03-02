// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557
// Carrera: Ing. Mecatronica
// Fecha creación: 27/02/2026

//Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el porcentaje de cruz.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int numero;
	int resultado;
	int caras=0;
	int cruces=0;
	
	cout << "Ingrese la cantidad de lanzamientos: ";
	cin >> numero;
	
	for (int i=0; i<numero; i++)
	{
		resultado = rand() % 2;
		
		if (resultado==0)
		{
			caras++;
		}
		
		else
		{
			cruces++;
		}
	}
	
	caras = caras*100/numero;
	
	cruces = cruces*100/numero;
	
	cout << "Porcentaje de caras: "<<caras<<"%"<<endl;
	cout << "Porcentaje de cruces: "<<cruces<<"%"<<endl;
	
	return 0;
}


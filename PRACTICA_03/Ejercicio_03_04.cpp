// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557
// Carrera: Ing. Mecatronica
// Fecha creación: 27/02/2026

/*
  Genere N números aleatorios entre 1 y 1000 y realice los siguientes cálculos:
  a. Sumatoria de todos los números
  b. Promedio
  c. Mayor valor generado
  d. Menor valor generado
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	int numero;
	int suma=0;
	int mayor;
	int menor;
	float promedio=0;
	
	cout << "Ingrese la cantidad de numeros aleatorios que quiere que se genere: ";
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		numero = rand() %1000 + 1;
		suma+= numero;
		promedio = suma/n;
		
		if (i==0)
		{
			menor=mayor=numero;
		}
		if (numero>mayor)
		{
			mayor = numero;
		}
		if (numero<menor)
		{
			menor = numero;
		}
	}
	
	cout << "La suma es: "<<suma<<endl;
	cout << "El promedio es: "<<promedio<<endl;
	cout << "Mayor: "<<mayor<<endl;
	cout << "Menor: "<<menor<<endl;
	
	return 0;
}


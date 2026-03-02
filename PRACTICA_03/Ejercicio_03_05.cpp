// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557
// Carrera: Ing. Mecatronica
// Fecha creación: 27/02/2026

//Genere N número aleatorios entre 1 y 10000, muéstrelos en pantalla y cuente cuantos números son primos.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	int numero;
	int contPrimos=0;
	int divisores;
	
	cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		numero = rand() % 10000 + 1;
		divisores = 0;
		
		for (int d=1; d<=numero; d++)
		{
			if (numero%d==0)
			{
				divisores++;
			}
		}
		
		if(divisores==2)
		{
			contPrimos++;
		}
	}
	
	cout << "De los "<<n<<" numeros generados, "<<contPrimos<<" son primos"<<endl;
	
	return 0;
}

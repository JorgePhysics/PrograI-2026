// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

/*
    Realice un programa que lea de la entrada de números entre 0 y 100, hasta
    que se introduzca un cero.
    En ese momento el programa debe terminar y mostrar la siguiente salida:
    • Suma todos los números ingresados.
    • Suma de todos los números pares.
    • Suma de todos los números impares.
    • Suma de todos los números primos.
*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	int sumaTotal=0;
	int sumaPares=0;
	int sumaImpares=0;
	int sumaPrimos=0;
	
	do
	{
		cout << "Ingrese un numero (0 para que termine): ";
		cin >> numero;
		
		if (numero != 0 && numero<=100)
		{
			sumaTotal += numero;
			
			if (numero % 2==0)
			{
				sumaPares += numero;
			}
			else
			{
				sumaImpares += numero;
			}
			
			if(numero > 1)
			{
				int esPrimo = 1;
				
				for (int i=2; i<numero; i++)
				{
					if(numero % i==0)
					{
						esPrimo = 0;
					}
				}
				
				if (esPrimo==1)
				{
					sumaPrimos += numero;
				}
			}
		}
		else
		{
			cout << "Numero fuera del rango intente de nuevo"<<endl;
		}
	} while(numero != 0);
	
	cout << "\n------Resultados Finales------"<<endl;
	cout << "Suma total: "<<sumaTotal<<endl;
	cout << "Suma Pares: "<<sumaPares<<endl;
	cout << "Suma impares: "<<sumaImpares<<endl;
	cout << "Suma primos: "<<sumaPrimos<<endl;
	
	return 0;
}






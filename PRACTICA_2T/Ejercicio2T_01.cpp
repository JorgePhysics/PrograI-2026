// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

// Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores de nombres y muestre los clientes repetidos.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MostrarComunes(vector<string>& A, vector<string>& B);

int main()
{
	vector<string> listaA = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
	vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofia", "Luis"};
	
	MostrarComunes(listaA, listaB);
	
	return 0;
}

void MostrarComunes(vector<string>& A, vector<string>& B)
{
	cout << "Clientes en comun: ";
	
	bool primero = true;
	
	for(int i = 0; i < A.size(); i++)
	{
		for(int j = 0; j < B.size(); j++)
		{
			if(A[i] == B[j])
			{
				if(!primero)
				{
					cout << ", ";
				}
				
				cout << A[i];
				
				primero = false;
				
				break;
			}
		}
	}
	
	cout << endl;
}

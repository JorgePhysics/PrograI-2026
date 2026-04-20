// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

//. Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores de nombres y muestre los clientes repetidos.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mostrarComunes(vector<string> A, vector<string> B);

int main() 
{
    vector<string> listaA = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofia", "Luis"};
    mostrarComunes(listaA, listaB);
    return 0;
}

void mostrarComunes(vector<string> A, vector<string> B) 
{
    cout << "Clientes en comun: ";
    for (const string& clienteA : A) 
	{
        for (const string& clienteB : B) 
		{
            if (clienteA == clienteB) 
			{
                cout << clienteA << " ";
                break; 
            }
        }
    }
    cout << endl;
}

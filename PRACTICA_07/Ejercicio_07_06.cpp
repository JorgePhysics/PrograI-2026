// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

//Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>
#include <vector>

using namespace std;

void sumarVectores(int v1[], int v2[], int v3[], int n);

void pedirDatos(int v[], int n, string nombre);

int main() 
{
    const int TAM = 5;
    int vector1[TAM], vector2[TAM], vector3[TAM];

    pedirDatos(vector1, TAM, "vector1");
    pedirDatos(vector2, TAM, "vector2");

    sumarVectores(vector1, vector2, vector3, TAM);

    cout << "Resultado (vector3 = vector1 + vector2):" << endl;
    for (int i = 0; i < TAM; i++) 
	{
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}

void sumarVectores(int v1[], int v2[], int v3[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        v3[i] = v1[i] + v2[i];
    }
}

void pedirDatos(int v[], int n, string nombre) 
{
    cout << "Ingrese 5 valores para " << nombre << ":" << endl;
    for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
}

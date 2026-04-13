// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

// Leer 2 vectores de dimensión N y combine ambos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

void combinarVectores(int v1[], int v2[], int combinado[], int n);

int main() 
{
    int n;
    cout << "Ingrese dimension N: ";
    cin >> n;

    int v1[n], v2[n], vCombinado[2 * n];

    cout << "Llenar Vector A:" << endl;
    for(int i=0; i<n; i++)
	{
		cin >> v1[i];
	} 
    
    cout << "Llenar Vector B:" << endl;
    for(int i=0; i<n; i++)
	{
		cin >> v2[i];
	} 

    combinarVectores(v1, v2, vCombinado, n);

    cout << "Vector combinado: ";
    for(int i=0; i < 2*n; i++)
	{
		cout << vCombinado[i] << " ";
	} 
    cout << endl;

    return 0;
}

void combinarVectores(int v1[], int v2[], int combinado[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        combinado[i] = v1[i];        
        combinado[i + n] = v2[i];    
    }
}

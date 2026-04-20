// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing.Mecatronica

// Fecha creación: 13/04/2023

//Generar la matriz para un orden nxn

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void generarMatrizPatron(vector<vector<int>>& mat, int n); 

void mostrarMatriz(const vector<vector<int>>& mat, int n);

int main() 
{
    int n;
    cout << "Ingrese el orden n de la matriz: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    generarMatrizPatron(matriz, n);
    cout << "\nMatriz generada para n=" << n << ":\n";
    mostrarMatriz(matriz, n);

    return 0;
}

void generarMatrizPatron(vector<vector<int>>& mat, int n) 
{
    int inicioFila = 1;
    for(int i = 0; i < n; i++) 
	{
        int valor = inicioFila;
        for(int j = 0; j < n; j++) 
		{
            mat[i][j] = valor++;
        }
        inicioFila += 2;
    }
}

void mostrarMatriz(const vector<vector<int>>& mat, int n) 
{
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
}

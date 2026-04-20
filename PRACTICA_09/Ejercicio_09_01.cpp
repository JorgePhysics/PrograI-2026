// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing.Mecatronica

// Fecha creación: 13/04/2023

//Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fila n.

#include <iostream>
#include <vector>

using namespace std;

void leerMatriz(vector<vector<int>>& mat, int n);

void intercambiarFilas(vector<vector<int>>& mat, int n); 

void mostrarMatriz(const vector<vector<int>>& mat, int n);

int main() 
{
    int n;
    cout << "Ingrese el orden n de la matriz: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    leerMatriz(matriz, n);
    cout << "\nMatriz original:\n";
    mostrarMatriz(matriz, n);

    intercambiarFilas(matriz, n);

    cout << "\nMatriz modificada (Fila 1 por Fila n):\n";
    mostrarMatriz(matriz, n);

    return 0;
}

void leerMatriz(vector<vector<int>>& mat, int n) 
{
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void intercambiarFilas(vector<vector<int>>& mat, int n) 
{
    for(int j = 0; j < n; j++) 
	{
        swap(mat[0][j], mat[n-1][j]);
    }
}

void mostrarMatriz(const vector<vector<int>>& mat, int n) 
{
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

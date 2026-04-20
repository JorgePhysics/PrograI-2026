// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing.Mecatronica

// Fecha creación: 13/04/2023

//Traspones una matriz de N x M

// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo
// Fecha creación: 13/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

void llenarMatriz(vector<vector<int>>& mat, int n, int m);

vector<vector<int>> obtenerTranspuesta(const vector<vector<int>>& mat, int n, int m);

void mostrarMatriz(const vector<vector<int>>& mat); 

int main() 
{
    int n, m;
    cout << "Ingrese N (filas) y M (columnas): ";
    cin >> n >> m;

    vector<vector<int>> matriz(n, vector<int>(m));
    llenarMatriz(matriz, n, m);

    cout << "Matriz Original:\n";
    mostrarMatriz(matriz);

    vector<vector<int>> transpuesta = obtenerTranspuesta(matriz, n, m);

    cout << "\nMatriz Transpuesta:\n";
    mostrarMatriz(transpuesta);

    return 0;
}

void llenarMatriz(vector<vector<int>>& mat, int n, int m) 
{
    int cont = 1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            mat[i][j] = cont++;
}

vector<vector<int>> obtenerTranspuesta(const vector<vector<int>>& mat, int n, int m) 
{
    vector<vector<int>> trans(m, vector<int>(n));
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < m; j++) 
		{
            trans[j][i] = mat[i][j];
        }
    }
    return trans;
}

void mostrarMatriz(const vector<vector<int>>& mat) 
{
    for(const auto& fila : mat) 
	{
        for(int val : fila) cout << val << "\t";
        cout << endl;
    }
}

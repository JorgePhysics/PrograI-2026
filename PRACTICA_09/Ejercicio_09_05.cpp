// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing.Mecatronica

// Fecha creación: 13/04/2023

//Multiplique dos matrices una de N x M y la otra de M x N

#include <iostream>
#include <vector>

using namespace std;

void leerMatriz(vector<vector<int>>& mat, int filas, int cols, char nombre);

vector<vector<int>> multiplicar(const vector<vector<int>>& A, const vector<vector<int>>& B, int N, int M);

void mostrarMatriz(const vector<vector<int>>& mat);

int main() 
{
    int n, m;
    cout << "Ingrese dimensiones N y M: ";
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(n));

    leerMatriz(A, n, m, 'A');
    leerMatriz(B, m, n, 'B');

    vector<vector<int>> C = multiplicar(A, B, n, m);

    cout << "\nResultado A x B (Matriz NxN):\n";
    mostrarMatriz(C);

    return 0;
}

void leerMatriz(vector<vector<int>>& mat, int filas, int cols, char nombre) 
{
    cout << "Datos para Matriz " << nombre << " (" << filas << "x" << cols << "):\n";
    for(int i = 0; i < filas; i++)
        for(int j = 0; j < cols; j++)
            cin >> mat[i][j];
}

vector<vector<int>> multiplicar(const vector<vector<int>>& A, const vector<vector<int>>& B, int N, int M) 
{
    vector<vector<int>> C(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++) 
	{
        for(int j = 0; j < N; j++) 
		{
            for(int k = 0; k < M; k++) 
			{
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void mostrarMatriz(const vector<vector<int>>& mat) 
{
    for(const auto& fila : mat) 
	{
        for(int val : fila) cout << val << "\t";
        cout << endl;
    }
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing.Mecatronica

// Fecha creación: 13/04/2023

/* 
Generar una matriz de N x N con números al azar entre A y B, y determinar:
• La suma de la última columna
• El producto total de la última fila
• Obtener el mayor valor y su posición
• Obtener la desviación estándar de todos los elementos de la matriz
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

void llenarAleatorio(vector<vector<int>>& mat, int n, int a, int b) 
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            mat[i][j] = a + rand() % (b - a + 1);
}

int sumaUltimaColumna(const vector<vector<int>>& mat, int n) 
{
    int suma = 0;
    for(int i = 0; i < n; i++) suma += mat[i][n-1];
    return suma;
}

long long productoUltimaFila(const vector<vector<int>>& mat, int n) 
{
    long long prod = 1;
    for(int j = 0; j < n; j++) prod *= mat[n-1][j];
    return prod;
}

void obtenerMayor(const vector<vector<int>>& mat, int n) 
{
    int mayor = mat[0][0], f = 0, c = 0;
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            if(mat[i][j] > mayor) 
			{
                mayor = mat[i][j];
                f = i; c = j;
            }
        }
    }
    cout << "Mayor valor: " << mayor << " en posicion [" << f << "][" << c << "]" << endl;
}

double desviacionEstandar(const vector<vector<int>>& mat, int n) {
    double suma = 0, promedio, varianza = 0;
    int total = n * n;
    for(auto& fila : mat) for(int x : fila) suma += x;
    promedio = suma / total;
    for(auto& fila : mat) for(int x : fila) varianza += pow(x - promedio, 2);
    return sqrt(varianza / total);
}

int main() 
{
    srand(time(NULL));
    int n, a, b;
    cout << "Orden N, Rango A y B: ";
    cin >> n >> a >> b;

    vector<vector<int>> matriz(n, vector<int>(n));
    llenarAleatorio(matriz, n, a, b);

    cout << "Suma ultima columna: " << sumaUltimaColumna(matriz, n) << endl;
    cout << "Producto ultima fila: " << productoUltimaFila(matriz, n) << endl;
    obtenerMayor(matriz, n);
    cout << "Desviacion estandar: " << fixed << setprecision(2) << desviacionEstandar(matriz, n) << endl;

    return 0;
}

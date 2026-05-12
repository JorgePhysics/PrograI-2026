// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

/*Generar una matriz de N x N con números al azar entre A y B, y determinar:
•    La suma de la primera columna
•    El producto total de la primera fila
•    Obtener el menor valor y su posición
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ProcesarMatriz(int n, int a, int b);

int main()
{
	srand(time(NULL));
	int n = 0;
	int a = 0;
	int b = 0;
	
	cout << "Ingrese el tamano de la matriz: ";
	cin >> n;
	
	cout << "Ingrese el limite inferior del aleatorio: ";
	cin >> a;
	
	cout << "Ingrese el limte superior del aleatorio: ";
	cin >> b;
	 
    ProcesarMatriz(n, a, b);
    
    return 0;
}

void ProcesarMatriz(int n, int a, int b)
{
	int matriz[100][100];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			matriz[i][j] = a + rand() % (b - a + 1);
		}
	}
	
	int SumCol1 = 0;
	
	for(int i = 0; i < n; i++)
	{
		SumCol1 += matriz[i][0];
	}
	
	int ProdFila1 = 1;
	
	for(int j = 0; j < n; j++)
	{
		ProdFila1 *= matriz[0][j];
	}
	
	int menor = matriz[0][0], posI = 0, posJ = 0;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(matriz[i][j] < menor)
			{
				menor = matriz[i][j];
				posI = i;
				posJ = j;
			}
		}
	}
	
	cout << "Suma Col 1: " << SumCol1 << endl;
    cout << "Producto Fila 1: " << ProdFila1 << endl;
    cout << "Menor: " << menor << " en posicion [" << posI << "][" << posJ << "]" << endl;
}

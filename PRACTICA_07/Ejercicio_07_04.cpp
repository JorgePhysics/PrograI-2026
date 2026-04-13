// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

//Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

void multiplicarVectores(const vector<int>& v1, const vector<int>& v2, vector<int>& res, int n);

int main() 
{
    int n;
    cout << "Ingrese el tamano de los vectores (N): ";
    cin >> n;

    vector<int> vector1(n), vector2(n), resultado(n);

    cout << "Datos Vector 1:" << endl;
    for (int i = 0; i < n; i++) 
	{
		cin >> vector1[i];
	}

    cout << "Datos Vector 2:" << endl;
    for (int i = 0; i < n; i++)
	{
		 cin >> vector2[i];
	}

    multiplicarVectores(vector1, vector2, resultado, n);

    cout << "Resultado de la multiplicacion: " << endl;
    for (int x : resultado)
	{
		cout << x << " ";
	} 
    cout << endl;

    return 0;
}

void multiplicarVectores(const vector<int>& v1, const vector<int>& v2, vector<int>& res, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        res[i] = v1[i] * v2[i];
    }
}

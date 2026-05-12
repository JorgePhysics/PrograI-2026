// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

// Compresión de datos en una imagen en escala de grises: Dada una imagen en escala de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra cuántos píxeles hay en cada rango.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void ClasificarPixeles(vector<int>& pixeles);

int main()
{
	srand(time(NULL));
	vector<int> pixeles;
	int N = 0;
	
	cout << "Ingrese la cantidad de pixeles a analizar: ";
	cin >> N;
	
	cout << "Pixeles: ";
	for(int i = 0; i < N; i++)
	{
		int valor = rand() % 256;
		pixeles.push_back(valor);
		cout << valor << " ";
	}
	
	cout << "\n\n";
	
	ClasificarPixeles(pixeles);
	
	return 0;
}

void ClasificarPixeles(vector<int>& pixeles)
{
	int conteo[26];
	
	for(int i = 0; i < 26; i++)
	{
		conteo[i] = 0;
	}
	
	for(int i = 0; i < pixeles.size(); i++)
	{
		int indiceRango = pixeles[i] / 10;
		conteo[indiceRango]++;
	}
	
	for(int i = 0; i < 26; i++)
	{
		int inicio = i * 10;
		int fin = inicio + 9;
		if(fin > 255)
		{
			fin = 255;
		}
		
		cout << inicio << "-" << fin << ": " << conteo[i];
		
		if(conteo[i] == 1)
		{
			cout << "pixel" << endl;
		}
		else
		{
			cout << " pixeles" << endl;
		}
	}
}

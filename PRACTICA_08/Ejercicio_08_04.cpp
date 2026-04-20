// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

//Compresión de datos en una imagen en escala de grises: Dada una imagen en escala de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra cuántos píxeles hay en cada rango.

// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo
// Fecha creación: 13/04/2026
// Descripción: Agrupa píxeles aleatorios en rangos de 10 unidades.

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

vector<int> generarImagen(int n);

void mostrarFrecuencias(const vector<int>& img);

int main() 
{
    srand(time(NULL));
    int n;
    cout << "Ingrese la cantidad de pixeles (N): ";
    cin >> n;

    vector<int> imagen = generarImagen(n);
    mostrarFrecuencias(imagen);

    return 0;
}

vector<int> generarImagen(int n) 
{
    vector<int> img(n);
    for (int i = 0; i < n; i++) 
	{
        img[i] = rand() % 256;
    }
    return img;
}

void mostrarFrecuencias(const vector<int>& img) 
{
    vector<int> rangos(26, 0);

    for (int pixel : img) 
	{
        int indice = pixel / 10;
        rangos[indice]++;
    }

    cout << "Histograma de la imagen (Rangos de 10):" << endl;
    for (int i = 0; i < 26; i++) 
	{
        int inicio = i * 10;
        int fin = inicio + 9;
        if (fin > 255) fin = 255;
        
        if (rangos[i] > 0) 
		{
            cout << "[" << inicio << " - " << fin << "]: " << rangos[i] << " pixeles" << endl;
        }
    }
}

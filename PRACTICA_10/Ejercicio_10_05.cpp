// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 15/04/2023

/*
Este problema utiliza una matriz para representar datos climáticos de diferentes
ciudades de Bolivia y devuelve múltiples resultados estadísticos mediante
parámetros de salida.
Contexto: Una matriz float temperaturas[4][7] almacena las temperaturas
máximas de 4 ciudades durante una semana (7 días). Requerimiento: Desarrolle
una función void analizarClima(float datos[4][7], int ciudadIdx, float &maxima,
float &minima, float &promedio) que:
1. Reciba la matriz y el índice de la ciudad que se desea analizar (0 a 3).
2. Calcule y devuelva, únicamente por referencia, la temperatura más alta,
la más baja y el promedio de esa ciudad específica.
3. En el main, el usuario debe ingresar el nombre de la ciudad (usando un
string), buscar su índice y llamar a la función para mostrar los resultados.
*/

// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo
// Fecha creación: 15/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void analizarClima(float datos[4][7], int ciudadIdx, float &maxima, float &minima, float &promedio);

int main() 
{
    float temperaturas[4][7] = 
	{
        {25, 26, 24, 28, 30, 29, 27}, 
        {32, 33, 31, 35, 34, 33, 32}, 
        {20, 21, 19, 22, 23, 21, 20}, 
        {28, 29, 27, 30, 31, 30, 29} 
    };
    string ciudades[] = {"La Paz", "Santa Cruz", "Potosi", "Tarija"};
    
    string seleccion;
    cout << "Ingrese nombre de la ciudad: ";
    getline(cin, seleccion);

    int idx = -1;
    for(int i=0; i<4; i++) if(ciudades[i] == seleccion) idx = i;

    if (idx != -1) 
	{
        float max, min, prom;
        analizarClima(temperaturas, idx, max, min, prom);
        cout << "Max: " << max << " Min: " << min << " Prom: " << prom << endl;
    } 
	else 
	{
        cout << "Ciudad no encontrada." << endl;
    }

    return 0;
}

void analizarClima(float datos[4][7], int ciudadIdx, float &maxima, float &minima, float &promedio) 
{
    maxima = datos[ciudadIdx][0];
    minima = datos[ciudadIdx][0];
    float suma = 0;

    for (int j = 0; j < 7; j++) 
	{
        if (datos[ciudadIdx][j] > maxima) maxima = datos[ciudadIdx][j];
        if (datos[ciudadIdx][j] < minima) minima = datos[ciudadIdx][j];
        suma += datos[ciudadIdx][j];
    }
    promedio = suma / 7; 
}

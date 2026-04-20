// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 15/04/2023

//Generar una función que en base a dos vectores llamados Nombres[10] y Apellidos[10], genere aleatoriamente N nombres completos.

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarNombresAleatorios(string nombres[], string apellidos[], int n);

int main() 
{
    srand(time(NULL));
    string Nombres[10] = {"Juan", "Maria", "Pedro", "Ana", "Luis", "Carla", "Jose", "Elena", "Diego", "Paula"};
    string Apellidos[10] = {"Gomez", "Perez", "Lopez", "Rodriguez", "Sosa", "Garcia", "Torres", "Flores", "Diaz", "Vargas"};
    
    int n;
    cout << "Ingrese la cantidad de nombres a generar: ";
    cin >> n;
    
    generarNombresAleatorios(Nombres, Apellidos, n);
    
    return 0;
}

void generarNombresAleatorios(string nombres[], string apellidos[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        int idxNom = rand() % 10;
        int idxApe = rand() % 10;
        cout << i + 1 << ": " << nombres[idxNom] << " " << apellidos[idxApe] << endl;
    }
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

// Diseñe una función void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota). La función recibe el acumulador de la suma y el contador de notas por referencia. Cada vez que se llama, suma la nuevaNota al total e incrementa en 1 el contador. Se debe llamar a esta función agregarNota() N veces.

#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main() 
{
    double suma = 0, nota;
    int contador = 0, n;
    
    cout << "Cuantas notas desea ingresar? ";
    cin >> n;
    
    for(int i = 0; i < n; i++) 
	{
        cout << "Ingrese nota " << i+1 << ": ";
        cin >> nota;
        agregarNota(suma, contador, nota);
    }
    
    if(contador > 0)
        cout << "Promedio final: " << suma / contador << endl;
        
    return 0;
}

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) 
{
    sumaTotal += nuevaNota; 
    cantidadNotas++; 
}



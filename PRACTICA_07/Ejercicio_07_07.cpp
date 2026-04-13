// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

//Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).

#include <iostream>
#include <vector>

using namespace std;

void llenarYMostrar(); 

int main() 
{
    llenarYMostrar();
    return 0;
}

void llenarYMostrar() 
{
    int vector[10];
    int i = 0, num;

    while (i < 10) 
	{
        cout << "Ingrese numero (negativo para salir): ";
        cin >> num;
        if (num < 0)
        break;
        vector[i] = num;
        i++;
    }

    cout << "Elementos introducidos: ";
    for (int j = 0; j < i; j++) 
	{ 
        cout << vector[j] << " ";
    }
    cout << endl;
}

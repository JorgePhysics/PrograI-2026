// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

//Escriba un programa para introducir los siguientes valores en un arreglo nombrado voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan introducido los datos, haga que su programa despliegue los valores.

#include <iostream>
#include <vector> 

using namespace std;

void mostrarVoltios(const vector<double>& v);

int main() 
{
    vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "--- LISTA DE VOLTIOS ---" << endl;
    mostrarVoltios(voltios);

    return 0;
}

void mostrarVoltios(const vector<double>& v) 
{
    for (int i = 0; i < v.size(); i++) 
	{
        cout << v[i] << " ";
        if ((i + 1) % 3 == 0) 
		{
            cout << endl;
        }
    }
}

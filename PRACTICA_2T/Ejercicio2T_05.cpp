// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

//Análisis de Ventas por Sucursal: Una empresa tiene 4 sucursales y registra sus ventas diarias durante una semana (7 días) en una matriz de 4 X 7:Diseñe un programa modular que calcule y muestre el total de ventas de cada sucursal (en una fusión llamada VentasPorSucursal y otra función llamada VentasPorDia en donde calcule las ventas por día.

#include <iostream>

using namespace std;

void VentasPorSucursal(double m[4][7]);

void VentasPorDia(double m[4][7]);

int main() {
    double ventas[4][7] = {0};
    
    ventas[0][0] = 150.5;
    
    VentasPorSucursal(ventas);
    
    VentasPorDia(ventas);
    
    return 0;
}

void VentasPorSucursal(double m[4][7]) 
{
    for (int i = 0; i < 4; i++) 
	{
        double total = 0;
        
        for (int j = 0; j < 7; j++)
		{
			 total += m[i][j];
		}
		
        cout << "Sucursal " << i + 1 << ": " << total << endl;
    }
}

void VentasPorDia(double m[4][7]) 
{
    for (int j = 0; j < 7; j++) 
	{
        double total = 0;
        
        for (int i = 0; i < 4; i++)
		{
			total += m[i][j];
		} 
		
        cout << "Dia " << j + 1 << ": " << total << endl;
    }
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 15/04/2023

/*
Este es el reto más completo, simulando un sistema real donde se cruza
información de nombres (strings), listas de stock (vectores) y distribución física
(matrices).
Problema: Una empresa tiene una lista de nombres de productos (vector<string>).
El stock físico se almacena en una matriz int bodega[N][M] donde cada fila es un
producto y cada columna es un depósito diferente. Requerimiento: Desarrolle un
sistema modular con las siguientes funciones void:
1. void inicializarInventario(int bodega[3][3]): Llena la matriz con valores
aleatorios entre 0 y 100.
2. void balancearCarga(int bodega[3][3], int filaProducto, int
&totalTransferido): Si el depósito 1 de un producto tiene más de 80
unidades, transfiere el excedente al depósito 2 de ese mismo producto,
modificando la matriz original y actualizando el totalTransferido por
referencia.
3. void mostrarReporte(const vector<string> &nombres, int bodega[3][3]):
Imprime el nombre del producto seguido de su stock en los 3 depósitos.
*/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

void inicializarInventario(int bodega[3][3]);

void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido);

void mostrarReporte(const vector<string> &nombres, int bodega[3][3]);

int main() 
{
    srand(time(NULL));
    vector<string> productos = {"Laptop", "Mouse", "Teclado"};
    int bodega[3][3];
    int transferido;

    inicializarInventario(bodega);
    cout << "--- Inventario Inicial ---" << endl;
    mostrarReporte(productos, bodega);

    for (int i = 0; i < 3; i++) 
	{
        balancearCarga(bodega, i, transferido);
        if (transferido > 0) 
            cout << "Se transfirieron " << transferido << " unidades del producto " << productos[i] << endl;
    }

    cout << "\n--- Inventario Balanceado ---" << endl;
    mostrarReporte(productos, bodega);

    return 0;
}

void inicializarInventario(int bodega[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            bodega[i][j] = rand() % 101; 
        }
    }
}

void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido) 
{
    if (bodega[filaProducto][0] > 80) 
	{
        int excedente = bodega[filaProducto][0] - 80;
        bodega[filaProducto][0] = 80;
        bodega[filaProducto][1] += excedente; 
        totalTransferido = excedente;
    } 
	else 
	{
        totalTransferido = 0;
    }
}

void mostrarReporte(const vector<string> &nombres, int bodega[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        cout << "Producto: " << nombres[i] << " | Stocks: ";
        for (int j = 0; j < 3; j++) 
		{
            cout << "Dep" << j+1 << ": " << bodega[i][j] << " ";
        }
        cout << endl;
    }
}

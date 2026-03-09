// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/03/2026

/* 
   La comercial 'La Estrella' vende n productos en un día, de los cuales factura al
   precio de cada uno con un IVA del 13%, y si el monto final se excede en 2500 Bs se
   aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el
   día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. El
   precio de los productos debe ser generado en forma aleatoria entre 20 y 50. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int PrecioAleatorio(int min, int max);
float CalcularDescuento(float total);

int main()
{
	srand(time(NULL));
	int n;
	float sumaTotal = 0;
	int MIN = 20;
	int MAX = 50;
	int precio;
	float iva;
	float montoFinal;
	
	cout << "Ingrese el numero de productos vendidos: ";
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		int precio = PrecioAleatorio(MIN, MAX);
		
		sumaTotal += precio;
	}
	
	iva = sumaTotal*0.13;
	montoFinal = CalcularDescuento(sumaTotal);
	
	cout << "Suma total de ventas: "<<sumaTotal<<" Bs"<<endl;
	cout << "Pago de IVA: "<<iva<<" Bs"<<endl;
	cout << "Monto final (con descuento si aplica): "<<montoFinal<<" Bs"<<endl;
	
	return 0;
}

int PrecioAleatorio(int min, int max)
{
	int aleatorio;
	
	aleatorio = rand() % (max-min+1)+min;
	
	return aleatorio;
}

float CalcularDescuento(float total)
{
	float resultado;
	
	if (total>2500)
	{
		resultado = total*0.95;
	}
	else
	{
		resultado = total;
	}
	
	return resultado;
}

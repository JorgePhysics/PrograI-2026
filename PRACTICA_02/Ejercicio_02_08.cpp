// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

/*
  La comercial 'La Estrella' vende n productos en un día, de los cuales factura
  al precio de cada uno con un IVA del 13%, y si el monto final se excede en
  2500 Bs se aplica un descuento del 5%. Obtener la suma total de las ventas
  realizadas en el día y calcular el pago del IVA del 13% al servicio de
  Impuestos Nacionales.
*/

#include <iostream>

using namespace std;

int main()
{
	int numero;
	double precio;
	double totalVentas=0;
	double ivaTotal;
	
	cout << "Cantidad de productos vendidos: ";
	cin >> numero;
	
	for (int i=1; i<=numero; i++)
	{
		cout << "El precio del producto "<<i<<": ";
		cin >> precio;
		totalVentas += precio;
	}
	
	ivaTotal = totalVentas*0.13;
	
	if (totalVentas > 2500)
	{
		totalVentas *= 0.95;
		cout << "Se aplico un descuento del 5%"<<endl;
	} 
	
	cout << "Suma total de ventas: "<<totalVentas<< " Bs"<<endl;
	cout << "IVA total a pagar: "<<ivaTotal<< " Bs"<<endl;
	
	return 0;
}

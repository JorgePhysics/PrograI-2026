// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/03/2026

/*
   Un negocio de 'Cosméticos' de belleza contratará a n vendedoras para la venta de
   sus productos. Cada vendedora en promedio debe vender 10 productos en un
   mes. La cancelación de los sueldos a las vendedoras se realiza cada fin de mes
   bajo las siguientes características: - Una vendedora recibe un sueldo básico de
   acuerdo a su antigüedad y además se añade un sueldo extra por comisión de
   ventas del 10% del total vendido. - La propietaria del negocio desea conocer
   cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuánto de
   comisión recibirá como extra.
*/

#include <iostream>

using namespace std;

float calcularComision(float ventas);
float calcularSueldoFinal(float basico, float comision);

int main() 
{
    int n;
    float sueldoBasico; 
	float totalVendido;
	float comisionExtra;
	float sueldoTotal;
    
    cout << "Ingrese la cantidad de vendedoras a procesar: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
	{
        cout << "\n--- Datos de la Vendedora " << i << " ---" << endl;
        
        cout << "Ingrese sueldo basico: "; 
        cin >> sueldoBasico;
        cout << "Ingrese el total vendido en el mes: "; 
        cin >> totalVendido;

        comisionExtra = calcularComision(totalVendido);
        sueldoTotal = calcularSueldoFinal(sueldoBasico, comisionExtra);

        cout << "Comision extra (10%): " << comisionExtra << " Bs." << endl;
        cout << "Sueldo total a cancelar: " << sueldoTotal << " Bs." << endl;
        cout << "-----------------------------------" << endl;
    }

    return 0;
}

float calcularComision(float ventas) 
{
	float c;
	
	c = ventas * 0.10;
	
    return c;
}

float calcularSueldoFinal(float basico, float comision) 
{
	float b;
	
	b = basico + comision;
	
    return b;
}

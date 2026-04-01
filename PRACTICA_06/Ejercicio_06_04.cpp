// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

//Cree una función CalcularPrecioTotal que reciba el precio base de un producto y un porcentaje de impuesto. Defina el impuesto con un valor predeterminado del 13% (correspondiente al IVA boliviano). Si el usuario solo envía el precio, la función debeticamente el 13%.

#include <iostream>

using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 0.13);

int main() 
{
    double precio = 100.0;
    cout << "Precio con IVA (13%): " << CalcularPrecioTotal(precio) << endl; 
    cout << "Precio con impuesto especial (20%): " << CalcularPrecioTotal(precio, 0.20) << endl;
    return 0;
}

double CalcularPrecioTotal(double precioBase, double impuesto) 
{
    return precioBase + (precioBase * impuesto);
}

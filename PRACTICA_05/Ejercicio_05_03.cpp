// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/03/2026

//Realizar un programa que reciba las horas trabajadas de un trabajador, la tarifa por hora y una bonificación si trabaja mas de 8 horas , solamente a las horas extra. Debe dar como resultado. trabajador b. Salario bonificación si es que tuviera.

#include <iostream>

using namespace std;

float obtenerBonificacion(float h, float t);
float obtenerPagoBase(float h, float t);

int main() 
{
    float horas; 
	float tarifa;
	float pBase;
	float pExtra;
	
    cout << "Horas trabajadas: "; 
	cin >> horas;
    cout << "Tarifa por hora: "; 
	cin >> tarifa;

    pBase = obtenerPagoBase(horas, tarifa);
    pExtra = obtenerBonificacion(horas, tarifa);

    cout << "a. Salario total del trabajador: " << (pBase + pExtra) << " Bs." << endl;
    cout << "b. Monto por bonificacion: " << pExtra << " Bs." << endl;

    return 0;
}

float obtenerBonificacion(float h, float t) 
{
    if (h > 8) 
	{
        return (h - 8) * t;
    }
    return 0;
}

float obtenerPagoBase(float h, float t) 
{
    if (h > 8) 
	{
        return 8 * t;
    }
    return h * t;
}

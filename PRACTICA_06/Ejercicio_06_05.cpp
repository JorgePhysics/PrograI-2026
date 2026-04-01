// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

/*. Implemente una función llamada calcularArea. Debe sobrecargarla para tres casos
distintos:
• Un parámetro (double): Calcula el área de un cuadrado.
• Dos parámetros (double, double): Calcula el área de un rectángulo.
• Un parámetro (float, float PI): Calcula el área de un círculo.
*/

#include <iostream>

using namespace std;

double calcularArea(double lado);
double calcularArea(double base, double altura);
double calcularArea(float radio, float pi);

int main() 
{
    cout << "Area Cuadrado (lado 4): " << calcularArea(4.0) << endl;
    cout << "Area Rectangulo (5x3): " << calcularArea(5.0, 3.0) << endl;
    cout << "Area Circulo (radio 2): " << calcularArea(2.0f, 3.1416f) << endl;
    return 0;
}

double calcularArea(double lado) 
{
    return lado * lado;
}

double calcularArea(double base, double altura) 
{
    return base * altura;
}

double calcularArea(float radio, float pi) 
{
    return pi * radio * radio;
}

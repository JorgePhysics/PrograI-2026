// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

//Cree una función void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos). La función recibe un número entero de segundos y debe modificar las variables de referencia para que contengan las horas, minutos y segundos y desplegarlos en el main().

#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main() 
{
    int t = 3665; 
    int h, m, s;
    calcularTiempo(t, h, m, s);
    cout << t << " segundos son: " << h << "h " << m << "m " << s << "s" << endl; 
    return 0;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) 
{
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60; 
}

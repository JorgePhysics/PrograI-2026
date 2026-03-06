// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 04/03/2026

//Cálculo de Física (MRU): Cree una función para calcular la distancia recorrida por un objeto, recibiendo como parámetros la velocidad constante y el tiempo (d=v*t).

#include <iostream>

using namespace std;

float Distancia(float velocidad, float tiempo);

int main()
{
	float velocidad;
	float tiempo;
	
	cout << "Ingrese la velocidad: ";
	cin >> velocidad;
	cout << "Ingrese el tiempo: ";
	cin >> tiempo;
	
	cout << "La distancia es: "<<Distancia(velocidad, tiempo)<<endl;
	
	return 0;
}

float Distancia(float velocidad, float tiempo)
{
	float distancia;
	
	distancia = velocidad*tiempo;
	
	return distancia;
}

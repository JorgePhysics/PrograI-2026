// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

/*
  Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
  a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
  b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
  c. Una lista de 30 caracteres alfanuméricos.
  d. Una lista de 100 años en número entero (entre 1990 y 2025)
  e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
  f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
  Los datos debes ser generados utilizando numero aleatorios.
*/

#include <iostream>
#include <vector>  
#include <cstdlib>
#include <ctime>

using namespace std;

void generarVoltajes(vector<double>& v);

void generarTemperaturas(vector<double>& t);

void generarCaracteres(vector<char>& c); 

void generarAnios(vector<int>& a); 

void generarVelocidades(vector<int>& v); 

void generarDistancias(vector<double>& d); 

int main() 
{
    srand(time(0));
    vector<double> voltajes;
    vector<double> temperaturas;
    vector<char> caracteres;
    vector<int> anios;
    vector<int> velocidades;
    vector<double> distancias;

    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnios(anios);
    generarVelocidades(velocidades);
    generarDistancias(distancias);

    cout << "--- DATOS GENERADOS ---" << endl;
    cout << "a) Voltajes generados: " << voltajes.size() << " | Ejemplo: " << voltajes[0] << endl;
    cout << "b) Temperaturas generadas: " << temperaturas.size() << " | Ejemplo: " << temperaturas[0] << endl;
    cout << "c) Caracteres generados: " << caracteres.size() << " | Ejemplo: " << caracteres[0] << endl;
    cout << "d) Anios generados: " << anios.size() << " | Ejemplo: " << anios[0] << endl;
    cout << "e) Velocidades generadas: " << velocidades.size() << " | Ejemplo: " << velocidades[0] << endl;
    cout << "f) Distancias generadas: " << distancias.size() << " | Ejemplo: " << distancias[0] << endl;

    return 0;
}

void generarVoltajes(vector<double>& v) 
{
    for(int i = 0; i < 100; i++)
	{
		v.push_back(20.0 + (rand() % 20001) / 100.0);
	} 
}

void generarTemperaturas(vector<double>& t) 
{
    for(int i = 0; i < 50; i++)
	{
		t.push_back((rand() % 10001) / 100.0);
	} 
}

void generarCaracteres(vector<char>& c) 
{
    const char opciones[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 30; i++)
    {
    	c.push_back(opciones[rand() % 62]);
	}
}

void generarAnios(vector<int>& a) 
{
    for(int i = 0; i < 100; i++)
	{
		a.push_back(1990 + rand() % (2025 - 1990 + 1));
	} 
}

void generarVelocidades(vector<int>& v) 
{
    for(int i = 0; i < 32; i++)
	{
		v.push_back(10 + rand() % (300 - 10 + 1));
	} 
}

void generarDistancias(vector<double>& d) 
{
    for(int i = 0; i < 1000; i++)
	{
		d.push_back(1.0 + (rand() % 99901) / 100.0);
	} 
}

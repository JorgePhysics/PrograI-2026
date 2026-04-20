// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 15/04/2023

/*
Este ejercicio se enfoca en la manipulación de contenedores dinámicos y el uso
de referencias para devolver múltiples estadísticas desde un módulo void.
Problema: Una institución educativa almacena los nombres de sus estudiantes
en un vector<string> y sus notas finales en un vector<double>. Requerimiento:
Desarrolle una función void procesarResultados(const vector<string> &nombres,
vector<double> &notas, double &promedio, int &aprobados) que:
1. Calcule el promedio general de la clase.
2. Cuente cuántos estudiantes tienen una nota mayor o igual a 51
(aprobados).
3. Si un estudiante tiene una nota entre 45 y 50, la función debe subirle la nota
a 51 directamente en el vector original (paso por referencia).
4. En el main, muestre la lista actualizada y las estadísticas.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void procesarResultados(const vector<string> &nombres, vector<double> &notas, double &promedio, int &aprobados); 

int main() 
{
    vector<string> nombres = {"Hugo", "Paco", "Luis", "Daisy"};
    vector<double> notas = {48.0, 70.0, 40.0, 50.0};
    double promedio;
    int aprobados;

    procesarResultados(nombres, notas, promedio, aprobados);

    cout << "--- Lista Actualizada ---" << endl;
    for (size_t i = 0; i < nombres.size(); i++) 
	{
        cout << nombres[i] << ": " << notas[i] << endl;
    }
    
    cout << "\nPromedio general: " << promedio << endl;
    cout << "Total aprobados: " << aprobados << endl;

    return 0;
}

void procesarResultados(const vector<string> &nombres, vector<double> &notas, double &promedio, int &aprobados) 
{
    double suma = 0;
    aprobados = 0;
    
    for (size_t i = 0; i < notas.size(); i++) 
	{
        if (notas[i] >= 45 && notas[i] <= 50) 
		{
            notas[i] = 51;
        }
        
        suma += notas[i];
        if (notas[i] >= 51) 
		{
            aprobados++;
        }
    }
    promedio = (notas.size() > 0) ? suma / notas.size() : 0; 
}

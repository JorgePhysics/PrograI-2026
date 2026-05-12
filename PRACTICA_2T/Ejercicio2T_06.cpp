// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

//Un docente almacena las notas de 3 parciales de un grupo de 20 estudiantes en una matriz de 20 X 3. Utilizando funcione, calcule la nota final de cada estudiante (promedio simple). Al finalizar, el programa debe reportar el índice (número de lista) del estudiante con el mejor promedio de todo el curso y el promedio general del grupo.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gestionarNotas(double notas[20][3]);

int main() 
{
    srand(time(0));
    double notas[20][3];

    for (int i = 0; i < 20; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            notas[i][j] = 10 + rand() % 91;
        }
    }

    gestionarNotas(notas);

    return 0;
}

void gestionarNotas(double notas[20][3]) 
{
    double sumaGeneral = 0;
    int mejorEstudiante = 0;
    double mejorPromedio = -1.0;

    cout << "--- NOTAS FINALES POR ESTUDIANTE ---" << endl;
    for (int i = 0; i < 20; i++) 
	{
        double sumaParciales = 0;
        for (int j = 0; j < 3; j++) 
		{
            sumaParciales += notas[i][j];
        }
        
        double promedioActual = sumaParciales / 3.0;
        sumaGeneral += promedioActual;

        cout << "Estudiante [" << i << "]: " << promedioActual << endl;

        if (promedioActual > mejorPromedio) 
		{
            mejorPromedio = promedioActual;
            mejorEstudiante = i;
        }
    }

    cout << "\n--- REPORTE FINAL ---" << endl;
    cout << "Promedio general del grupo: " << sumaGeneral / 20.0 << endl;
    cout << "Indice del estudiante con mejor promedio: " << mejorEstudiante << endl;
    cout << "Nota del mejor promedio: " << mejorPromedio << endl;
}

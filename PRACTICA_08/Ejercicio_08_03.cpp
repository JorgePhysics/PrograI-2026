// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

/*
  Rango de calificaciones en un curso: Un maestro tiene N calificaciones de sus
  estudiantes en un vector. Las calificaciones deben ser llenadas en forma aleatoria entre 0
  y 100. Luego debe calcular el porcentaje de estudiantes en cada rango:
  • 0-59 (Reprobado)
  • 60-79 (Regular)
  • 80-89 (Bueno)
  • 90-100 (Excelente)
*/

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void calcularPorcentajes(const vector<int>& notas); 

int main() 
{
    srand(time(NULL));
    int n;
    cout << "Ingrese cantidad de calificaciones: "; cin >> n;
    vector<int> calificaciones(n);
    for (int i = 0; i < n; i++) calificaciones[i] = rand() % 101;
    
    calcularPorcentajes(calificaciones);
    return 0;
}

void calcularPorcentajes(const vector<int>& notas) 
{
    float r = 0, reg = 0, b = 0, e = 0;
    for (int n : notas) 
	{
        if (n <= 59) r++;
        else if (n <= 79) reg++;
        else if (n <= 89) b++;
        else e++;
    }
    int total = notas.size();
    cout << "Reprobados: " << (r/total)*100 << "%" << endl;
    cout << "Regulares: " << (reg/total)*100 << "%" << endl;
    cout << "Buenos: " << (b/total)*100 << "%" << endl;
    cout << "Excelentes: " << (e/total)*100 << "%" << endl;
}

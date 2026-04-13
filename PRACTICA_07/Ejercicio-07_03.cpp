// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/04/2026

/*
  Escriba un programa para introducir los N números enteros en un arreglo llamado calificaciones.
  Después que todos los números son introducidos obtener:
  • La suma total de calificaciones,
  • El promedio de los números
  • Use el promedio para determinar la desviación de cada valor del promedio.
  • Almacene cada desviación en un arreglo llamado desviación. Cada desviación se
  obtiene como el valor del elemento menos el promedio de todos los datos. Haga
  que su programa despliegue cada desviación al lado de su elemento
  correspondiente del arreglo calificaciones.
  • Calcule la varianza de los datos usados. La varianza se obtiene elevando al
  cuadrado cada desviación individual y dividiendo la suma de las desviaciones
  cuadradas entre el número de desviaciones.
*/
#include <iostream>
#include <vector>

using namespace std;

void calcularEstadisticas(int cal[], int n);

int main() 
{
    int n;
    cout << "Ingrese cantidad de notas: ";
    cin >> n;
    int calificaciones[n];

    for(int i = 0; i < n; i++) 
	{
        cout << "Nota " << i+1 << ": ";
        cin >> calificaciones[i];
    }

    calcularEstadisticas(calificaciones, n);
    return 0;
}

void calcularEstadisticas(int cal[], int n) 
{
    double suma = 0, promedio, varianza = 0;
    for(int i = 0; i < n; i++) 
	{
		suma += cal[i];
	}
    
    promedio = suma / n;
    double desviacion[n];

    cout << "Calificacion\tDesviacion" << endl;
    
    for(int i = 0; i < n; i++) 
	{
        desviacion[i] = cal[i] - promedio; 
        varianza += (desviacion[i] * desviacion[i]);
        cout << cal[i] << "\t\t" << desviacion[i] << endl; 
    }

    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza / n << endl; 
}

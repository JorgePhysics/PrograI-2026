// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

/*
  Se tiene 3 vectores de 10 elementos cada uno:
  • Vector de nombres.
  • Vector Apellidos
  • Vector de Edad
  Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
  Esto debe realizar N veces.
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarCombinaciones(int n, vector<string> &nom, vector<string> &ape, vector<int> &edad);

int main()
{
	srand(time(NULL));
	vector<string> nombres = {"Juan", "Ana", "Luis", "Maria", "Pedro", "Lucia", "Carlos", "Elena", "Jose", "Rosa"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Arce", "Vaca", "Rojas", "Soria", "Cruz", "Diaz", "Mora"};
    vector<int> edades = {18, 20, 22, 25, 30, 19, 21, 24, 28, 23};
    
    int n;
    cout << "Cuantas combinaciones desea generar: ";
    cin >> n;
    
    generarCombinaciones(n, nombres, apellidos, edades);
    
    return 0;
}

void generarCombinaciones(int n, vector<string> &nom, vector<string> &ape, vector<int> &edad)
{
	for (int i = 0; i < n; i++)
	{
		int iN = rand() % 10;
		int iA = rand() % 10;
		int iE = rand() % 10;
		
		cout << nom[iN] << " " << ape[iA] << "- Edad: " << edad[iE] << endl;
	}
}

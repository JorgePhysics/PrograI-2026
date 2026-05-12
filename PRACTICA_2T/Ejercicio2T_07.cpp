// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

/*Un hospital regional requiere un sistema para controlar la temperatura de 5 pacientes en la Unidad de Cuidados Intensivos durante las últimas 24 horas.
•    Use un vector<string> para los nombres de los pacientes y una matriz monitoreo [5][24] para las temperaturas registradas cada hora.
•    Llenar el vector con los siguientes datos de los pacientes:
o    Ana Torroja
o    Juan Luna
o    Sergio Murillo
o    Liliana Espinoza
o    Mercedes Lima
•    Llenar la matriz con valores aleatorios entre 20 y 40.
•    Implemente una función VerificarAlertas que reciba un umbral de temperatura. La función debe indicar qué pacientes superaron ese umbral en más de 3 ocasiones durante el día.
*/

// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 11/05/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void VerificarAlertas(const vector<string>& nombres, int monitoreo[5][24], int umbral);

int main() 
{
    srand(time(NULL));
    
    vector<string> pacientes = {"Ana Torroja", "Juan Luna", "Sergio Murillo", "Liliana Espinoza", "Mercedes Lima"};

    int monitoreo[5][24];

    for (int i = 0; i < 5; i++) 
	{
        for (int j = 0; j < 24; j++) 
		{
            monitoreo[i][j] = 20 + rand() % 21; 
        }
    }

    int umbral;
    cout << "Ingrese el umbral de temperatura a controlar: ";
    cin >> umbral;

    VerificarAlertas(pacientes, monitoreo, umbral);

    return 0;
}

void VerificarAlertas(const vector<string>& nombres, int monitoreo[5][24], int umbral) 
{
    bool huboAlertas = false;
    cout << "\n--- RESULTADOS DEL MONITOREO (Umbral: " << umbral << ") ---" << endl;

    for (int i = 0; i < 5; i++) 
	{
        int contadorOcasiones = 0;
        for (int j = 0; j < 24; j++) 
		{
            if (monitoreo[i][j] > umbral) 
			{
                contadorOcasiones++;
            }
        }

        if (contadorOcasiones > 3) 
		{
            cout << "Paciente: " << nombres[i] << " supero el umbral " 
                 << contadorOcasiones << " veces en el dia." << endl;
            huboAlertas = true;
        }
    }

    if (!huboAlertas) 
	{
        cout << "No se registraron alertas críticas para este umbral." << endl;
    }
}

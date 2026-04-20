// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 15/04/2023

/*
Este ejercicio se centra en la limpieza y validación de datos dentro de
contenedores dinámicos, utilizando referencias para reportar el estado del
proceso.
Contexto: Un sistema de seguridad registra los nombres de las personas que
ingresan a un edificio en un vector<string>. Sin embargo, algunos registros tienen
errores de formato (espacios extra o caracteres no permitidos).
Requerimiento: Implemente una función void limpiarBitacora(vector<string>
&registros, char caracterProhibido, int &correccionesRealizadas) que:
1. Recorra cada string dentro del vector.
2. Si el nombre contiene el caracterProhibido, debe eliminarlo del string
original (modificando el vector por referencia).
3. Incremente el contador correccionesRealizadas cada vez que se detecte y
limpie un error.
4. En el main, muestre la lista antes y después de la limpieza.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas);

int main() 
{
    vector<string> ingresos = {"Juan@Gomez", "Maria Lopez", "Pe@dro", "Ana$Vargas"};
    char prohibido = '@';
    int total;

    cout << "--- Bitácora Original ---" << endl;
    for (const string &s : ingresos) cout << s << endl;

    limpiarBitacora(ingresos, prohibido, total);

    cout << "\n--- Bitácora Limpia ---" << endl;
    for (const string &s : ingresos) cout << s << endl;
    
    cout << "\nTotal de registros corregidos: " << total << endl;

    return 0;
}

void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas) 
{
    correccionesRealizadas = 0;

    for (string &nombre : registros) 
	{
        string nombreLimpio = "";
        bool huboCambio = false;

        for (int i = 0; i < nombre.length(); i++) 
		{
            if (nombre[i] != caracterProhibido) 
			{
                nombreLimpio += nombre[i]; 
            } 
			else 
			{
                huboCambio = true;
            }
        }

        if (huboCambio) 
		{
            nombre = nombreLimpio;
            correccionesRealizadas++;
        }
    }
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

/*
Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un
delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void dividirCadena(string texto, char delimitador);

int main() 
{
    string entrada = "Esto,es,una,cadena,separada,por,comas";
    char delimitador = ',';

    cout << "Entrada: " << entrada << endl;
    cout << "Delimitador: '" << delimitador << "'" << endl;
    cout << "Salida:" << endl;

    dividirCadena(entrada, delimitador);

    return 0;
}

void dividirCadena(string texto, char delimitador) 
{
    string token = " ";
    
    for (int i = 0; i < texto.length(); i++) 
	{
        if (texto[i] == delimitador) 
		{
            if (token != "") 
			{
                cout << token << endl;
            }
            token = "";
        } 
		else 
		{
            token += texto[i];
        }
    }
    
    if (token != "") 
	{
        cout << token << endl;
    }
}

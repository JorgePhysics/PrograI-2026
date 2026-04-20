// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

//Crea una función que reciba un String de cualquier tipo y se encargue de poner en mayúscula la primera letra de cada palabra. No se pueden utilizar operaciones del lenguaje que lo resuelvan directamente.

#include <iostream>
#include <string>

using namespace std;

string capitalizarFrase(string texto); 

int main() 
{
    string frase;
    
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    
    string resultado = capitalizarFrase(frase);
    
    cout << "Entrada: " << frase << endl;
    cout << "Salida:  " << resultado << endl;
    
    return 0;
}

string capitalizarFrase(string texto) 
{
    if (texto.length() == 0) return texto;

    for (int i = 0; i < texto.length(); i++) 
	{
        if (i == 0 || texto[i - 1] == ' ') 
		{
            if (texto[i] >= 'a' && texto[i] <= 'z') 
			{
                texto[i] = texto[i] - 32;
            }
        }
    }
    return texto;
}

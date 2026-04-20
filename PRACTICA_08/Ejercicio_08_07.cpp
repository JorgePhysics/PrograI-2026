// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

//Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

string eliminarDigitos(string texto);

int main() 
{
    string entrada;
    
    cout << "Ingrese una cadena con numeros: ";
    // Usamos getline por si la cadena tiene espacios
    getline(cin, entrada);
    
    string salida = eliminarDigitos(entrada);
    
    cout << "Entrada: \"" << entrada << "\"" << endl;
    cout << "Salida:  \"" << salida << "\"" << endl;
    
    return 0;
}

string eliminarDigitos(string texto) 
{
    string resultado = " ";
    
    for (int i = 0; i < texto.length(); i++) 
	{
        if (!isdigit(texto[i])) 
		{
            resultado += texto[i];
        }
    }
    
    return resultado;
}

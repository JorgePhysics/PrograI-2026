// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

/*
   Escribe un programa que invierta el orden de las palabras en una oración sin cambiar el
   orden de los caracteres dentro de cada palabra.
   • // Entrada: "Hola mundo desde C++"
   • // Salida: "C++ desde mundo Hola"
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream> // Útil para separar palabras por espacios
#include <algorithm> // Para usar reverse

using namespace std;

string invertirPalabras(string frase);

int main() 
{
    string texto;
    cout << "Ingrese una frase: ";
    getline(cin, texto);
    cout << "Resultado: " << invertirPalabras(texto) << endl;
    return 0;
}

string invertirPalabras(string frase) 
{
    stringstream ss(frase);
    string palabra, resultado = "";
    
    while (ss >> palabra) 
	{
        reverse(palabra.begin(), palabra.end());
        resultado += palabra + " ";
    }
    return resultado;
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

//Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según sean o no palíndromos. Un Palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha que de derecha a izquierda. NO se tienen en cuenta los espacios, signos de puntuación y tildes.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char normalizar(char c);

bool esPalindromo(string texto); 

int main() 
{

    string prueba1 = "Anita lava la tina";
    string prueba2 = "La ruta nos aporto otro paso natural";
    string prueba3 = "Ingenieria";

    cout << "¿\"" << prueba1 << "\" es palindromo? " << (esPalindromo(prueba1) ? "SI" : "NO") << endl;
    cout << "¿\"" << prueba2 << "\" es palindromo? " << (esPalindromo(prueba2) ? "SI" : "NO") << endl;
    cout << "¿\"" << prueba3 << "\" es palindromo? " << (esPalindromo(prueba3) ? "SI" : "NO") << endl;

    return 0;
}

char normalizar(char c) 
{
    c = tolower(c);
    if (c == (char)160 || c == (char)131) return 'a'; 
    if (c == (char)130 || c == (char)144) return 'e'; 
    if (c == (char)161 || c == (char)214) return 'i'; 
    if (c == (char)162 || c == (char)224) return 'o'; 
    if (c == (char)163 || c == (char)233) return 'u';
    return c;
}

bool esPalindromo(string texto) 
{
    string filtrado = "";
    
    for (int i = 0; i < texto.length(); i++) 
	{
        if (isalnum(texto[i])) 
		{ 
            filtrado += normalizar(texto[i]);
        }
    }
    
    int inicio = 0;
    int fin = filtrado.length() - 1;
    
    while (inicio < fin) 
	{
        if (filtrado[inicio] != filtrado[fin]) 
		{
            return false; 
        }
        inicio++;
        fin--;
    }
    
    return true;
}

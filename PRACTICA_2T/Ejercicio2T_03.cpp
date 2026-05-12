// PRÁCTICA ADICIONAL 2T

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 15/04/2023

// Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según sean o no palíndromos. Un Palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha que de derecha a izquierda. NO se tienen en cuenta los espacios, signos de puntuación y tildes.

#include <iostream>
#include <string>

using namespace std;

bool EsPalindromo(string texto);

int main()
{
	string frase = "Ana lleva al oso la avellana";
	
    if (EsPalindromo(frase))
	{
		cout << "Es palindromo" << endl;
	} 
    else
	{
		cout << "No es palindromo" << endl;
	}
	
    return 0;
}

bool EsPalindromo(string texto)
{
	string Limpia = "";
	
	for(int i = 0; i < texto.length(); i++)
	{
		char c = texto[i];
		
		if(c >= 'A' && c<= 'Z')
		{
			Limpia += (char)(c + 32);
		}
		else if(c >= 'a' && c <= 'z')
		{
			Limpia += c;
		}
	}
	
	int n = Limpia.length();
	
	for(int i = 0; i < n/2; i++)
	{
		if(Limpia[i] != Limpia[n - 1 - i])
		{
			return false;
		}
	}
	
	return true;
} 

// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557.
// Carrera del estudiante: Ingenieria Mecatronica .
// Fecha creación: 23/02/2026

//Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuario si el número que digito es menor
//o mayor al número aleatorio, así hasta que lo adivine. Y por ultimo
//mostrarle el número de intentos que le llevo.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int secreto=rand()%100+1;
	int intento;
	int contador=0;
	
	cout << "He pensado un numero entre 1 y 100, ADIVINALO!!"<<endl;
	
	do
	{
		cout << "Tu numero: ";
		cin >> intento;
		contador++;
		if (intento > secreto)
		{
			cout << "Es menor...."<<endl;
		}
		else if (intento < secreto)
		{
			cout << "Es mayor...."<<endl;
		}
		else
		{
			cout << "Felecidades!!! lo lograste "<<secreto<<" en "<<contador<<" intentos"<<endl;
		}
	} while (intento != secreto);
	
	return 0;
}


// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 12/02/2026

//Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, resta, multiplicación y división.

#include <iostream>

using namespace std;

int main()
{
	int valor1=0;
	int valor2=0;
	
	cout << "Ingrese el primer valor: "<<endl;
	cin >> valor1;
	cout << "Ingrese el segundo valor: "<<endl;
	cin >> valor2;
	cout << "\nResultados: \n"<<endl;
	cout << "suma: "<<valor1+valor2<<endl;
	cout << "resta: "<<valor1-valor2<<endl;
	cout << "multiplicacion: "<<valor1*valor2<<endl;
	
	if(valor2!=0)
	{
		cout << "division: "<<valor1/valor2<<endl;
	}
	else
	{
		cout << "No se puede dividir entre cero"<<endl;
	}
	return 0;
}
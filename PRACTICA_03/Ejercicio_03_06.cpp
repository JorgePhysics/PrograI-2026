// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo Velasquez
// Carnet: 8483557
// Carrera: Ing. Mecatronica
// Fecha creación: 27/02/2026

/*
  En una guardería hay N niños de 1, 2 y 3 años:
  - Los niños de 1 año consumen 6 pañales al día
  - Los niños de 2 años consumen 3 pañales diarios
  - Los niños de 3 años consumen 2 pañales diarios
  Se desea conocer cuántos pañales por día se consumen.
  La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la
  suma no debe sobrepasar los N niños.
  Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma
  aleatoria 5 niños de 1 año, 20 niños de 2 años y 3 niños de 3 años.
  De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90
  PAÑALES
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int N;
	int ninos1;
	int ninos2;
	int ninos3;
	int totalNinos;
	int totalPanales;
	int resto;
	
	cout << "Ingrese la cantidad limite de ninos: ";
	cin >> N;
	
	ninos1 = rand() % (N+1);
	resto = N - ninos1;
	
	if (resto>0)
	{
		ninos2 = rand() % (resto+1);
	}
	else
	{
		ninos2 = 0;
	}
	
	resto = resto -ninos2;
	
	if (resto>0)
	{
		ninos3 = rand() % (resto+1);
	}
	else
	{
		ninos3 = 0;
	}
	
	totalPanales = (ninos1*6) + (ninos2*3) + (ninos3*2);
	totalNinos = ninos1 + ninos2 + ninos3;
	
	cout << "Cantidad de ninos de 1: "<<ninos1<<endl;
	cout << "Cantidad de ninos de 2: "<<ninos2<<endl;
	cout << "Cantidad de ninos de 3: "<<ninos3<<endl;
	cout << "Total de ninos en la Guarderia: "<<totalNinos<<endl;
	cout << "Gasto total de panales por dia: "<<totalPanales<<endl;
	
	return 0;
}

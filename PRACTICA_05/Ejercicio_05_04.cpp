// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/03/2026

/*
   (Tipo Examen) TIGO lanzo una promoción llamada “Mi Tigo te yapa”, estas son los
   tipos de tarjetas.
   •
   Generar N clientes que tienen entre 10 y 1000 Bs (Este valor debe ser
   generado en forma aleatoria). Realizar una función que le indique cuantas
   tarjetas debe comprar cada uno de los clientes, si solo compra un tipo de
   tarjeta (el tipo de tarjeta debe ser generado aleatoriamente), el ahorro total
   que logrará por esta promoción y si le sobra cambio.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generarAleatorio(int min, int max); 
float calcularCambio(int tipo, float presupuesto);

int main() 
{
    int n;
    float miDinero;
    int tipoTarjeta;
    float cambioSobrante;
    srand(time(NULL));

    cout << "Ingrese la cantidad de clientes (N): ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
	{
        cout << "\n--- CLIENTE " << i << " ---" << endl;
        
        miDinero = generarAleatorio(10, 1000);
        tipoTarjeta = generarAleatorio(1, 6);

        cout << "Dinero inicial: Bs. " << miDinero << endl;
        
        cambioSobrante = calcularCambio(tipoTarjeta, miDinero);
        
        cout << "Cambio sobrante: Bs. " << cambioSobrante << endl;
        cout << "---------------------------" << endl;
    }

    return 0;
}

int generarAleatorio(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

float calcularCambio(int tipo, float presupuesto) 
{
    float costo = 0; 
	float regalo = 0;
	int cantidad;
	float ahorro;
	float cambio;

    switch (tipo) 
	{
        case 1: costo = 10; regalo = 5; break;
        case 2: costo = 20; regalo = 10; break;
        case 3: costo = 30; regalo = 15; break;
        case 4: costo = 50; regalo = 25; break;
        case 5: costo = 100; regalo = 50; break;
        case 6: costo = 200; regalo = 100; break;
        default: costo = 0; regalo = 0; break;
    }

    if (costo > 0) 
	{
        cantidad = presupuesto / costo;
        ahorro = cantidad * regalo;
        cambio = presupuesto - (cantidad * costo);

        cout << "Tipo de tarjeta: Bs. " << costo << " (Yapa: Bs. " << regalo << ")" << endl;
        cout << "Cantidad comprada: " << cantidad << " unidades" << endl;
        cout << "Ahorro total por promocion: Bs. " << ahorro << endl;
        
        return cambio;
    }
    
    return presupuesto;
}

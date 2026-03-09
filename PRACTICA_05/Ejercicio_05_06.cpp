// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/03/2026

/*
   (Tipo Examen) En la UCB existe solamente 3 tipos de materias.
   • Materia Idiomas (3 créditos)
   • Materia con laboratorio (6 créditos)
   • Materia normal (5 créditos)
   Simular la inscripción de N estudiantes que tomarán aleatoriamente entre dos y
   ocho materias de diferentes tipos. Si el valor de un crédito de la UCB es 350 Bs,
   cuánto dinero debe recibir la UCB por la inscripción de los N estudiantes.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generarAleatorio(int min, int max);
int obtenerCreditosMateria(int tipo);
double calcularCostoInscripcion(int totalCreditos);

int main() 
{
    srand(time(NULL));
    int n;
    double montoTotalUCB = 0;
    int cantidadMaterias;
    int creditosEstudiante = 0;
    int tipoMateria;
    double costoEstudiante;

    cout << "Ingrese cuantos estudiantes desea inscribir: ";
    cin >> n;

    cout << "\n--- DETALLE DE INSCRIPCION ---" << endl;

    for (int i = 1; i <= n; i++) 
	{
        cantidadMaterias = generarAleatorio(2, 8);
        creditosEstudiante = 0;

        for (int j = 1; j <= cantidadMaterias; j++) 
		{
            tipoMateria = generarAleatorio(1, 3);
            creditosEstudiante = creditosEstudiante + obtenerCreditosMateria(tipoMateria);
        }

        costoEstudiante = calcularCostoInscripcion(creditosEstudiante);
        montoTotalUCB = montoTotalUCB + costoEstudiante;

        cout << "Estudiante " << i << ": " << cantidadMaterias << " materias, " 
             << creditosEstudiante << " creditos. Total: " << costoEstudiante << " Bs." << endl;
    }

    cout << "-----------------------------------------------" << endl;
    cout << "MONTO TOTAL RECIBIDO POR LA UCB: " << montoTotalUCB << " Bs." << endl;

    return 0;
}

int generarAleatorio(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

int obtenerCreditosMateria(int tipo) 
{
    switch (tipo) {
        case 1: return 3; 
        case 2: return 6; 
        case 3: return 5; 
        default: return 0;
    }
}

double calcularCostoInscripcion(int totalCreditos) 
{
    return totalCreditos * 350.0;
}

// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 06/03/2026

/* 
   (Tipo Examen) La UCB ha aperturado sus inscripciones del semestre 1-2026
   Pero solamente se puede inscribir los estudiantes de las siguientes carreras:
   • Ingeniería de Sistemas
   • Diseño digital
   • Ingeniería Mecatrónica
   • Ingeniería e Innovación Empresarial
   Esta inscripción solamente se apertura para estudiantes que cursen materias de
   2do a 5to semestre. Y se inscribirán entre 3 a 6 materias por estudiante, cada
   materia tiene 5 créditos que equivale a 525 Bs mensuales.
   Simular la inscripción de N estudiantes y sacar los siguientes reportes:
   • Total, de estudiantes inscritos por carreras.
   • Total de materias tomadas por nivel (2do a 5to semestre)
   • Monto total recaudado de los N estudiantes inscritos.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generarAleatorio(int min, int max);
float calcularCostoMensual(int materias); 

int main() 
{
    srand(time(NULL));
    int n;  
    int contSistemas = 0;
	int contDiseno = 0;
	int contMeca = 0; 
	int contInno = 0;
    int mat2do = 0; 
	int mat3ro = 0; 
	int mat4to = 0; 
	int mat5to = 0;
	int carrera;
	int semestre;
	int materias;
    float montoTotalRecaudado = 0;

    cout << "Ingrese la cantidad de estudiantes a inscribir: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
	{
        carrera = generarAleatorio(1, 4); 
        semestre = generarAleatorio(2, 5); 
        materias = generarAleatorio(3, 6); 

        switch (carrera) 
		{
            case 1: contSistemas++; break;
            case 2: contDiseno++; break;
            case 3: contMeca++; break;
            case 4: contInno++; break;
        }

        switch (semestre) 
		{
            case 2: mat2do += materias; break;
            case 3: mat3ro += materias; break;
            case 4: mat4to += materias; break;
            case 5: mat5to += materias; break;
        }

        montoTotalRecaudado += calcularCostoMensual(materias);
    }

    cout << "\n======= REPORTE DE INSCRIPCIONES =======" << endl;
    cout << "ESTUDIANTES POR CARRERA:" << endl;
    cout << "- Ingenieria de Sistemas: " << contSistemas << endl;
    cout << "- Diseno Digital: " << contDiseno << endl;
    cout << "- Ingenieria Mecatronica: " << contMeca << endl;
    cout << "- Ingenieria e Innovacion: " << contInno << endl;
    
    cout << "\nTOTAL MATERIAS POR NIVEL:" << endl;
    cout << "- 2do Semestre: " << mat2do << endl;
    cout << "- 3ro Semestre: " << mat3ro << endl;
    cout << "- 4to Semestre: " << mat4to << endl;
    cout << "- 5to Semestre: " << mat5to << endl;

    cout << "\nMONTO TOTAL RECAUDADO: " << montoTotalRecaudado << " Bs." << endl;
    cout << "========================================" << endl;

    return 0;
}

int generarAleatorio(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

float calcularCostoMensual(int materias) 
{
    return materias * 525.0;
}

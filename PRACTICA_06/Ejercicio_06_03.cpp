// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 31/03/2026

//Crea una función llamada “ModificarValores” que reciba dos parámetros: un entero por valor y un entero por referencia. La función debe multiplicar el valor por 2 (para el valor pasado por valor) y cambiar el valor por referencia (sumando 10). 

#include <iostream>

using namespace std;

void ModificarValores(int porValor, int &porReferencia);

int main() {
    int a = 10, b = 10;
    ModificarValores(a, b);
    cout << "a (por valor): " << a << " (no cambia)" << endl;
    cout << "b (por referencia): " << b << " (cambio a 20)" << endl;
    return 0;
}

void ModificarValores(int porValor, int &porReferencia) 
{
    porValor *= 2;        
    porReferencia += 10;  
}

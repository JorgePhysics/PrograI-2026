// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 15/04/2023

/*
Este es un ejercicio de integración total que simula la interacción entre una
interfaz de usuario y una estructura de datos bidimensional.
Contexto: Un teatro tiene una matriz char mapa[10][10] donde 'D' significa
Disponible y 'R' Reservado. Además, se tiene un vector<string> listaEspera con los
nombres de personas que quieren un asiento. Requerimiento: Implemente una
función void asignarAsientoEspecial(char sala[10][10], vector<string> &espera, int
fila, int col, bool &exito) que:
1. Verifique si el asiento en la fila y col está 'D'.
2. Si está disponible, cambie el valor en la matriz a 'R'.
3. Tome el primer nombre del vector<string> listaEspera, lo asigne
simbólicamente al asiento (mostrando un mensaje) y lo elimine del vector
usando .erase().
4. Modifique la variable exito a true por referencia si la operación fue posible.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void asignarAsientoEspecial(char sala[10][10], vector<string> &espera, int fila, int col, bool &exito);

int main() 
{
    char mapa[10][10];
    for(int i=0; i<10; i++) for(int j=0; j<10; j++) mapa[i][j] = 'D';
    
    vector<string> listaEspera = {"Jorge", "Luis", "Ana"};
    bool exito;

    asignarAsientoEspecial(mapa, listaEspera, 5, 5, exito);
    
    if(exito) cout << "Operacion exitosa." << endl;
    else cout << "No se pudo asignar el asiento." << endl;

    return 0;
}

void asignarAsientoEspecial(char sala[10][10], vector<string> &espera, int fila, int col, bool &exito) 
{
    if (fila >= 0 && fila < 10 && col >= 0 && col < 10 && sala[fila][col] == 'D' && !espera.empty()) 
	{
        sala[fila][col] = 'R'; // [cite: 34]
        cout << "Asiento asignado a: " << espera[0] << endl; // [cite: 35]
        espera.erase(espera.begin()); // Elimina al primero [cite: 35]
        exito = true; // [cite: 36]
    } 
	else 
	{
        exito = false;
    }
}

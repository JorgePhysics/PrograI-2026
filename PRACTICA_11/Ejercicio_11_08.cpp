// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 8

//Realizar un algoritmo recursivo para elaborar un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático  Ullman) que consiste en lo siguiente: •  Empiece con cualquier entero positivo. •  Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1. •  Obtenga enteros sucesivamente repitiendo el proceso. Al final se obtendrá el número 1, independientemente del entero inicial

#include <iostream>

using namespace std;

void ullman(int n) 
{
    cout << n << " "; 
    
    if (n == 1) return; 
    
    if (n % 2 == 0) 
    {
        ullman(n / 2); 
    } 
    else 
    {
        ullman((n * 3) + 1); 
    }
}

int main() 
{
    int n;
    
    cout << "Ingrese un numero entero (n > 1): "; 
    cin >> n;
    cout << "Secuencia de Ullman: ";
    
    ullman(n);
    
    cout << endl;
    
    return 0;
}

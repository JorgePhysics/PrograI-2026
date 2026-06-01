// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 4

//Realizar un algoritmo recursivo para calcular el máximo común divisor de dos números enteros aplicando el algoritmo de Euclides

#include <iostream>

using namespace std;

int mcd(int a, int b) 
{
    if (b == 0) return a; 
    
    return mcd(b, a % b); 
}

int main() 
{
    int x, y;
    
    cout << "Ingrese dos numeros para hallar el MCD: ";
     cin >> x >> y;
     
    cout << "El MCD es: " << mcd(x, y) << endl;
    
    return 0;
}

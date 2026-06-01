// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

//Realizar un algoritmo recursivo para la siguiente función

#include <iostream>

using namespace std;

long Q(int n) 
{
    if (n == 1) return 1; 
    
    return (n * n) + Q(n - 1); 
}

int main() 
{
    int n;
    
    cout << "Calcular Q(n) para n = ";
     cin >> n;
    cout << "Resultado: " << Q(n) << endl;
    
    return 0;
}

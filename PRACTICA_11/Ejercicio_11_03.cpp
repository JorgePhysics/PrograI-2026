// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 3

//Implementa una función recursiva que devuelva el enésimo número en la secuencia de Fibonacci. La secuencia de Fibonacci es una serie de números donde cada número es la suma de los dos anteriores, comenzando con 0 y 1

#include <iostream>

using namespace std;

int fibonacci(int n) 
{
    if (n == 0) return 0; 
    
    if (n == 1) return 1; 
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    
    cout << "Enesimo numero de Fibonacci a calcular: "; 
    cin >> n;
    
    cout << "El numero en la posicion " << n << " es: " << fibonacci(n) << endl;
    
    return 0;
}

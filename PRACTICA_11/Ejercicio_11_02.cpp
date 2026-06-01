// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

//Implementa una función recursiva para calcular la potencia de un número. La función debe recibir dos parámetros, la base a y el exponente n, y devolver el valor de a^n. Evita usar la función pow de la biblioteca estándar

#include <iostream>

using namespace std;

long potencia(int a, int n) 
{
    if (n == 0) return 1; 
    
    return a * potencia(a, n - 1); 
}

int main()
{
    int base, exp;
    
    cout << "Base a: "; cin >> base;
    cout << "Exponente n: "; cin >> exp;
    cout << "Resultado: " << potencia(base, exp) << endl;
    
    return 0;
}

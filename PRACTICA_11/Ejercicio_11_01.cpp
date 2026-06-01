// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 1

//Escribe una función recursiva que reciba un número entero positivo y devuelva la suma de sus dígitos

#include <iostream>

using namespace std;

int sumaDigitos(int n) 
{
    if (n == 0) return 0;
     
    return (n % 10) + sumaDigitos(n / 10); 
}

int main() 
{
    int num;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    
    cout << "La suma de los digitos es: " << sumaDigitos(num) << endl; 
    
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 5

//Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos

#include <iostream>
#include <vector>

using namespace std;

int sumaVector(const vector<int>& v, int n) 
{
    if (n <= 0) return 0; 
    
    return v[n - 1] + sumaVector(v, n - 1); 
}

int main() 
{
    vector<int> vec = {10, 20, 30, 40, 50};
    
    cout << "La suma de los elementos del vector es: " << sumaVector(vec, vec.size()) << endl;
    
    return 0;
}

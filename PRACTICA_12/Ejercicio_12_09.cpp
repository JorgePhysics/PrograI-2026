// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 9

//Cifrado de un archivo de texto (Cifrado César) Descripción: Escribe un programa que lea un archivo mensaje.txt, realice un cifrado César con un desplazamiento de 3 sobre el texto y guarde el resultado en un archivo mensaje_cifrado.txt. El cifrado César desplaza cada letra por un número fijo de posiciones en el alfabeto

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char aplicarCesar(char c, int desplazamiento) 
{
    if (isalpha(c)) 
    {
        char base = isupper(c) ? 'A' : 'a';
        
        return (c - base + desplazamiento) % 26 + base;
    }
    return c; 
}

void cifrarArchivoCesar(const string& archivoOrigen, const string& archivoDestino, int desplazamiento) 
{
    ifstream entrada(archivoOrigen);
    ofstream salida(archivoDestino);
    
    if (!entrada.is_open() || !salida.is_open()) 
    {
        cerr << "Error al procesar los archivos de cifrado." << endl;
        return;
    }
    
    char c;

    while (entrada.get(c)) 
    {
        salida.put(aplicarCesar(c, desplazamiento));
    }
    
    entrada.close();
    salida.close();
    cout << "Archivo cifrado correctamente en '" << archivoDestino << "' con clave K=" << desplazamiento << "." << endl;
}

int main() 
{
    string origen = "mensaje.txt";
    string destino = "mensaje_cifrado.txt";
    int clave = 3; 
    
    cifrarArchivoCesar(origen, destino, clave);
    
    return 0;
}

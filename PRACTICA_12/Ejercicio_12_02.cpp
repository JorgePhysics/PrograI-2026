// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

//Contador de palabras en un archivo Descripción: Escribe un programa que lea un archivo de texto llamado texto.txt y cuente cuántas palabras contiene. Una "palabra" se define como cualquier secuencia de caracteres separada por espacios o saltos de línea

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarPalabras(const string& nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        
        return -1; 
    }
    
    string palabra;
    
    int contador = 0;
    
    while (archivo >> palabra) 
    {
        contador++;
    }
    
    archivo.close();
    
    return contador;
}

int main() 
{
    string nombreArchivo = "texto.txt";
    
    int totalPalabras = contarPalabras(nombreArchivo);
    
    if (totalPalabras != -1) 
    {
        cout << "El archivo '" << nombreArchivo << "' contiene " << totalPalabras << " palabras." << endl;
    }
    
    return 0;
}

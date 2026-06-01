// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 8

//Contador de líneas, palabras y caracteres Descripción: Escribe un programa que lea un archivo de texto llamado documento.txt y cuente el número total de líneas, palabras y caracteres. Al final, el programa debe mostrar estos totales en la consola

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void analizarDocumento(const string& nombreArchivo, int& lineas, int& palabras, int& caracteres) 
{
    ifstream archivo(nombreArchivo);
    
    lineas = 0;
    palabras = 0;
    caracteres = 0;
    
    if (!archivo.is_open()) 
    {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        return;
    }
    
    string linea;
    while (getline(archivo, linea)) 
    {
        lineas++;
        
        caracteres += linea.length() + 1; 
       
        stringstream ss(linea);
        string palabra;
        while (ss >> palabra) 
        {
            palabras++;
        }
    }
    
    archivo.close();
}

int main() 
{
    string nombreArchivo = "documento.txt";
    int totalLineas = 0, totalPalabras = 0, totalCaracteres = 0;
    
    analizarDocumento(nombreArchivo, totalLineas, totalPalabras, totalCaracteres);
    
    cout << "--- Estadísticas de '" << nombreArchivo << "' ---" << endl;
    cout << "Total líneas: " << totalLineas << endl;
    cout << "Total palabras: " << totalPalabras << endl;
    cout << "Total caracteres: " << totalCaracteres << endl;
    
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

//Promedio de calificaciones por estudiante Descripción: Escribe un programa que lea un archivo calificaciones.txt, donde cada línea contiene el nombre de un estudiante seguido de varias calificaciones. El programa debe calcular el promedio de cada estudiante y escribirlo en un archivo promedios.txt en el formato Nombre Promedio

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void generarReportePromedios(const string& archivoNotas, const string& archivoReporte) 
{
    ifstream entrada(archivoNotas);
    ofstream salida(archivoReporte);
    
    if (!entrada.is_open() || !salida.is_open()) 
    {
        cerr << "Error al abrir los archivos correspondientes." << endl;
        return;
    }
    
    string linea;
    
    while (getline(entrada, linea)) 
    {
        if (linea.empty()) continue; 
        
        stringstream ss(linea);
        string nombre;
        
        ss >> nombre;
        
        double nota;
        double suma = 0.0;
        int cantidadNotas = 0;
        
        while (ss >> nota) 
        {
            suma += nota;
            cantidadNotas++;
        }
        
        double promedio = (cantidadNotas > 0) ? (suma / cantidadNotas) : 0.0;
        
        salida << nombre << " " << promedio << endl;
    }
    
    entrada.close();
    salida.close();
    cout << "Archivo de promedios generado con éxito como '" << archivoReporte << "'." << endl;
}

int main() 
{
    string entrada = "calificaciones.txt";
    string salida = "promedios.txt";
    
    generarReportePromedios(entrada, salida);
    
    return 0;
}

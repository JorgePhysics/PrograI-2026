// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 13/05/2026
// Número de ejercicio: 6

//Filtrado de registros de temperatura Descripción: Escribe un programa que lea un archivo de texto llamado temperaturas.txt, donde cada línea contiene el nombre de una ciudad seguido de su temperatura promedio del día. El programa debe generar un archivo altas_temperaturas.txt que solo incluya las ciudades con temperaturas superiores a N°C

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void filtrarTemperaturas(const string& archivoEntrada, const string& archivoSalida, double tempLimite) 
{
    ifstream entrada(archivoEntrada);
    ofstream salida(archivoSalida);
    
    if (!entrada.is_open()) 
    {
        cerr << "Error: No se pudo abrir el archivo de origen " << archivoEntrada << endl;
        return;
    }
    
    if (!salida.is_open()) 
    {
        cerr << "Error: No se pudo crear el archivo de destino " << archivoSalida << endl;
        entrada.close();
        return;
    }
    
    string ciudad;
    double temperatura;
    int contadorFiltrados = 0;
    
    while (entrada >> ciudad >> temperatura) 
    {
        if (temperatura > tempLimite) 
        {
            salida << ciudad << " " << temperatura << endl;
            contadorFiltrados++;
        }
    }
    
    entrada.close();
    salida.close();
    
    cout << "Proceso completado. Se exportaron " << contadorFiltrados 
         << " ciudades con temperaturas superiores a " << tempLimite << "°C." << endl;
}

int main() 
{
    string archivoDatos = "temperaturas.txt";
    string archivoResultados = "altas_temperaturas.txt";
    double limite;
    
    cout << "Ingrese el valor de la temperatura límite (N°C): ";
    cin >> limite;
    
    filtrarTemperaturas(archivoDatos, archivoResultados, limite);
    
    return 0;
}

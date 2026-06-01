// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 22/05/2026

/*Datos de un atleta 
Descripción: Crea una estructura llamada Atleta que contenga los siguientes campos: 
•  nombre (cadena de caracteres) •  pais (cadena de caracteres) •  edad (entero) •  mejor_tiempo (entero, en segundos) 
Escribe un programa que permita al usuario ingresar los datos de N atletas y, al final, muestre el nombre y país del atleta con el mejor tiempo registrado
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Atleta 
{
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo; 
};

void registrarAtletas(vector<Atleta> &atletas);
Atleta obtenerMejorAtleta(const vector<Atleta> &atletas);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de atletas (N): ";
    cin >> n;
    
    if (n <= 0) 
    {
        cout << "Cantidad invalida." << endl;
        return 1;
    }
    
    vector<Atleta> listaAtletas(n);
    registrarAtletas(listaAtletas);
    
    Atleta mejor = obtenerMejorAtleta(listaAtletas);
    
    cout << "\n--- ATLETA CON EL MEJOR TIEMPO ---" << endl;
    cout << "Nombre: " << mejor.nombre << endl;
    cout << "Pais: " << mejor.pais << endl;
    cout << "Tiempo: " << mejor.mejor_tiempo << " segundos" << endl;
    
    return 0;
}

void registrarAtletas(vector<Atleta> &atletas) 
{
    for (size_t i = 0; i < atletas.size(); i++) 
    {
        cout << "\nDatos del atleta #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, atletas[i].nombre);
        cout << "Pais: ";
        getline(cin, atletas[i].pais);
        cout << "Edad: ";
        cin >> atletas[i].edad;
        cout << "Mejor tiempo (en segundos): ";
        cin >> atletas[i].mejor_tiempo;
    }
}

Atleta obtenerMejorAtleta(const vector<Atleta> &atletas) 
{
    Atleta mejor = atletas[0];
    for (size_t i = 1; i < atletas.size(); i++) 
    {
        if (atletas[i].mejor_tiempo < mejor.mejor_tiempo) 
        {
            mejor = atletas[i];
        }
    }
    return mejor;
}

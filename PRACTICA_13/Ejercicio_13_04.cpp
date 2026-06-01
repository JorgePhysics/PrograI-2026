// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 22/05/2026

/*Personal de la UCB Descripción: Se tiene una lista de empleados de la UCB y esta se almacena en una variable tipo struct llamada “empleado”. La información con la que se cuenta es: •  nombre (cadena de caracteres) •  genero (cadena de caracteres) •  salario (decimal) Realizar un programa en C++ que lea un array de estructuras los datos de los N trabajadores de la empresa e imprima los datos de los empleados con menor y mayor salario. 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado {
    string nombre;
    string genero;
    double salario;
};

void cargarEmpleados(vector<Empleado> &personal);
void buscarExtremosSalariales(const vector<Empleado> &personal, Empleado &mayor, Empleado &menor);
void mostrarEmpleado(const Empleado &emp);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de empleados de la UCB: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Cantidad no valida." << endl;
        return 1;
    }

    vector<Empleado> personal(n);
    cargarEmpleados(personal);

    Empleado empMayor, empMenor;
    buscarExtremosSalariales(personal, empMayor, empMenor);

    cout << "\n--- EMPLEADO CON MAYOR SALARIO ---" << endl;
    mostrarEmpleado(empMayor);

    cout << "\n--- EMPLEADO CON MENOR SALARIO ---" << endl;
    mostrarEmpleado(empMenor);

    return 0;
}

void cargarEmpleados(vector<Empleado> &personal) 
{
    for (size_t i = 0; i < personal.size(); i++) 
    {
        cout << "\nDatos del empleado #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, personal[i].nombre);
        cout << "Genero: ";
        getline(cin, personal[i].genero);
        cout << "Salario: ";
        cin >> personal[i].salario;
    }
}

void buscarExtremosSalariales(const vector<Empleado> &personal, Empleado &mayor, Empleado &menor) 
{
    mayor = personal[0];
    menor = personal[0];

    for (size_t i = 1; i < personal.size(); i++) 
    {
        if (personal[i].salario > mayor.salario) 
        {
            mayor = personal[i];
        }
        if (personal[i].salario < menor.salario) 
        {
            menor = personal[i];
        }
    }
}

void mostrarEmpleado(const Empleado &emp) 
{
    cout << "Nombre: " << emp.nombre << endl;
    cout << "Genero: " << emp.genero << endl;
    cout << "Salario: " << emp.salario << " Bs." << endl;
}

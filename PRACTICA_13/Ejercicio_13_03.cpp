// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 22/05/2026

/*Estudiantes de Programación I: Descripción: Desarrolle una estructura que guarde los datos de los n alumnos de la materia Programación I y los muestres por pantalla, la estructura debe tener los siguientes datos: •  cedula (entero) •  nombre (cadena de caracteres) •  apellido (cadena de caracteres) •  edad (entero) •  profesión (cadena de caracteres) •  lugar_nacimiento (cadena de caracteres) •  dirección (cadena de caracteres) •  teléfono (entero)
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante 
{
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

void cargarEstudiantes(vector<Estudiante> &alumnos);
void mostrarEstudiantes(const vector<Estudiante> &alumnos);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de estudiantes de Programacion I: ";
    cin >> n;
    
    if (n <= 0) 
    {
        cout << "Cantidad invalida." << endl;
        return 1;
    }
    
    vector<Estudiante> listaAlumnos(n);
    
    cout << "\n--- REGISTRO DE ALUMNOS ---" << endl;
    cargarEstudiantes(listaAlumnos);
    
    cout << "\n--- LISTADO DE ESTUDIANTES REGISTRADOS ---" << endl;
    mostrarEstudiantes(listaAlumnos);
    
    return 0;
}

void cargarEstudiantes(vector<Estudiante> &alumnos) 
{
    for (size_t i = 0; i < alumnos.size(); i++) 
    {
        cout << "\nEstudiante #" << i + 1 << ":" << endl;
        cout << "Cedula: ";
        cin >> alumnos[i].cedula;
        cout << "Nombre: ";
        getline(cin >> ws, alumnos[i].nombre);
        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Profesion: ";
        getline(cin >> ws, alumnos[i].profesion);
        cout << "Lugar de nacimiento: ";
        getline(cin, alumnos[i].lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, alumnos[i].direccion);
        cout << "Telefono: ";
        cin >> alumnos[i].telefono;
    }
}

void mostrarEstudiantes(const vector<Estudiante> &alumnos) 
{
    for (size_t i = 0; i < alumnos.size(); i++) 
    {
        cout << "\n----------------------------------------" << endl;
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "CI: " << alumnos[i].cedula << endl;
        cout << "Nombre Completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << " anos" << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar de Nacimiento: " << alumnos[i].lugar_nacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
    cout << "----------------------------------------" << endl;
}

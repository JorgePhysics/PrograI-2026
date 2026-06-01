// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 22/05/2026

/*Registro de una biblioteca 
Descripción: Define una estructura llamada Libro con los siguientes campos: 
•  titulo (cadena de caracteres) •  autor (cadena de caracteres) •  anio_publicacion (entero) •  disponible (booleano, que indica si el libro está disponible o no) 
Escribe un programa que permita al usuario registrar los datos de 1 libros, y luego muestre los datos del libro, indicando si está o no disponible
*/

#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

void registrarLibro(Libro &l);
void mostrarLibro(const Libro &l);

int main() 
{
    Libro miLibro;
    
    cout << "--- REGISTRO DE LIBRO ---" << endl;
    registrarLibro(miLibro);
    
    cout << "\n--- DATOS DEL LIBRO REGISTRADO ---" << endl;
    
    mostrarLibro(miLibro);
    
    return 0;
}

void registrarLibro(Libro &l) 
{
    cout << "Ingrese el titulo del libro: ";
    getline(cin >> ws, l.titulo); 
    
    cout << "Ingrese el autor: ";
    getline(cin, l.autor);
    
    cout << "Ingrese el anio de publicacion: ";
    cin >> l.anio_publicacion;
    
    char opc;
    cout << "¿Esta disponible? (s/n): ";
    cin >> opc;
    l.disponible = (opc == 's' || opc == 'S');
}

void mostrarLibro(const Libro &l) 
{
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio de Publicacion: " << l.anio_publicacion << endl;
    cout << "Estado: " << (l.disponible ? "Disponible" : "No disponible") << endl;
}

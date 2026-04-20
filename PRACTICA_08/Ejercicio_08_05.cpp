// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 13/04/2023

/*
   Escribe un programa que valide si una cadena ingresada cumple con el formato básico
   de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@' y al
   menos un punto '.' después del '@').
   • // Entrada: "usuario@example.com"
   • // Salida: "Correo electrónico válido"
   • // Entrada: "usuarioexample.com"
   • // Salida: "Correo electrónico inválido"
*/

#include <iostream>
#include <string>

using namespace std;

bool esCorreoValido(string email); 

int main() 
{
    string correo;
    cout << "Ingrese su email: "; cin >> correo;
    if (esCorreoValido(correo)) cout << "Correo valido." << endl;
    else cout << "Correo invalido." << endl;
    return 0;
}

bool esCorreoValido(string email) 
{
    size_t posAt = email.find('@');
    size_t posPunto = email.find('.', posAt); 

    if (posAt != string::npos && posPunto != string::npos) 
	{
        if (posPunto < email.length() - 1) return true;
    }
    return false;
}

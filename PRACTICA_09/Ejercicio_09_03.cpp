// Materia: Programación I, Paralelo 4

// Autor: Jorge Delgadillo Velasquez

// Carnet: 8483557

// Carrera del estudiante: Ing.Mecatronica

// Fecha creación: 13/04/2023

/* 
En la segunda temporada de The Walking Dead, los personajes llegaron a una
cárcel para refugiarse. La cárcel estaba rodeada de vallas por lo que los muertos
vivientes no podían entrar en ella. Sin embargo, dentro de las instalaciones aun
existían muertos vivientes que amenazaban a los personajes. Por tanto, Rick y
otros miembros del grupo decidieron ir a investigar las instalaciones con el fin de
determinar cuáles eran los lugares seguros. Para lograr su objetivo construyeron
un mapa basado en una matriz que indicaba las zonas seguras. Después de un
tiempo, tu grupo llega al mismo complejo y encuentra el mapa hecho por Rick.
Para mantener a salvo a tus amigos decides diseñar e implementar un programa
que te ayude a determinar las zonas seguras.
Tu trabajo es determinar los siguientes datos:
a) Mostrar la matriz que describe el área.
b) Mostrar el número de filas y columnas que no tienen un muerto viviente.
c) Determinar las coordenadas de los muertos vivientes en la matriz. Utilice
vectores paralelos para almacenar la posición de los muertos vivientes. Un
vector almacenara el índice de la fila y otro vector almacenara el índice de la
columna.
d) La cantidad de muertos vivientes que existen en toda la matriz.
e) Determinar si dos o más muertos vivientes se encuentran en la primera
columna. Si es así imprimir “no es posible entrar al complejo” de otro modo
imprimir “es posible entrar al complejo”.
*/

// Materia: Programación I, Paralelo 4
// Autor: Jorge Delgadillo
// Fecha creación: 13/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

const int FILAS = 3;
const int COLS = 4;

void mostrarMatriz(char mat[FILAS][COLS]);

void contarLibres(char mat[FILAS][COLS]);

void coordenadasZombis(char mat[FILAS][COLS]);

void verificarEntrada(char mat[FILAS][COLS]);

int main() 
{
    char mapa[FILAS][COLS] = 
	{
        {'X', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'X', '0', '0', '0'}
    };

    cout << "a) "; mostrarMatriz(mapa);
    cout << "b) "; contarLibres(mapa);
    cout << "c) "; coordenadasZombis(mapa);
    cout << "e) "; verificarEntrada(mapa);

    return 0;
}

void mostrarMatriz(char mat[FILAS][COLS]) 
{
    for(int i = 0; i < FILAS; i++) 
	{
        for(int j = 0; j < COLS; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}

void contarLibres(char mat[FILAS][COLS]) 
{
    int fLibres = 0, cLibres = 0;
    for(int i = 0; i < FILAS; i++) 
	{
        bool tieneZom = false;
        for(int j = 0; j < COLS; j++) if(mat[i][j] == 'X') tieneZom = true;
        if(!tieneZom) fLibres++;
    }
    for(int j = 0; j < COLS; j++) 
	{
        bool tieneZom = false;
        for(int i = 0; i < FILAS; i++) if(mat[i][j] == 'X') tieneZom = true;
        if(!tieneZom) cLibres++;
    }
    cout << "Filas libres: " << fLibres << "\nColumnas libres: " << cLibres << endl;
}

void coordenadasZombis(char mat[FILAS][COLS]) 
{
    vector<int> f_pos, c_pos;
    for(int i = 0; i < FILAS; i++) 
	{
        for(int j = 0; j < COLS; j++) 
		{
            if(mat[i][j] == 'X') {
                f_pos.push_back(i);
                c_pos.push_back(j);
            }
        }
    }
    cout << "Posiciones en la matriz (F -- C):" << endl;
    for(size_t i = 0; i < f_pos.size(); i++) 
        cout << f_pos[i] << " -- " << c_pos[i] << endl;
}

void verificarEntrada(char mat[FILAS][COLS]) 
{
    int cont = 0;
    for(int i = 0; i < FILAS; i++) if(mat[i][0] == 'X') cont++;
    
    if(cont >= 2) cout << "No es posible entrar al complejo" << endl;
    else cout << "Es posible entrar al complejo" << endl;
}

// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 22/05/2026

/*Olimpiada Nacional Descripción: El viceministerio de deportes hace una olimpiada a nivel nacional de los siguientes deportes: • 
Tiro con arco • 
Atletismo • 
Boxeo • 
Ciclismo • 
Natación • 
Esgrima 
También se registra los nombres de los atletas y que departamento representa y que deporte practica. 
Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un atleta y que me muestre el medallero final por departamento
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct AtletaOlimpico 
{
    string nombre;
    string departamento; 
    string deporte;      
    int oro;
    int plata;
    int bronce;
};

struct MedalleroDepartamento 
{
    string departamento;
    int oro = 0;
    int plata = 0;
    int bronce = 0;
};

void registrarAtletasMedallas(vector<AtletaOlimpico> &atletas);
void calcularMedalleroGeneral(const vector<AtletaOlimpico> &atletas, vector<MedalleroDepartamento> &medallero);
void actualizarMedalleroDep(vector<MedalleroDepartamento> &medallero, const string &dep, int o, int p, int b);
void mostrarMedalleroFinal(const vector<MedalleroDepartamento> &medallero);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de atletas participantes: ";
    cin >> n;

    if (n <= 0) return 1;

    vector<AtletaOlimpico> atletas(n);
    registrarAtletasMedallas(atletas);

    vector<MedalleroDepartamento> medallero;
    calcularMedalleroGeneral(atletas, medallero);
    mostrarMedalleroFinal(medallero);

    return 0;
}

void registrarAtletasMedallas(vector<AtletaOlimpico> &atletas) 
{
    for (size_t i = 0; i < atletas.size(); i++) 
    {
        cout << "\nDatos del Atleta #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, atletas[i].nombre);
        cout << "Departamento que representa: ";
        getline(cin, atletas[i].departamento);
        cout << "Deporte (Tiro con arco, Atletismo, Boxeo, Ciclismo, Natacion, Esgrima): ";
        getline(cin, atletas[i].deporte);
        cout << "Medallas de Oro ganadas: ";
        cin >> atletas[i].oro;
        cout << "Medallas de Plata ganadas: ";
        cin >> atletas[i].plata;
        cout << "Medallas de Bronce ganadas: ";
        cin >> atletas[i].bronce;
    }
}

void actualizarMedalleroDep(vector<MedalleroDepartamento> &medallero, const string &dep, int o, int p, int b) 
{
    for (auto &m : medallero) 
    {
        if (m.departamento == dep) 
        {
            m.oro += o;
            m.plata += p;
            m.bronce += b;
            return;
        }
    }
    MedalleroDepartamento nuevoDep;
    nuevoDep.departamento = dep;
    nuevoDep.oro = o;
    nuevoDep.plata = p;
    nuevoDep.bronce = b;
    medallero.push_back(nuevoDep);
}

void calcularMedalleroGeneral(const vector<AtletaOlimpico> &atletas, vector<MedalleroDepartamento> &medallero) 
{
    for (const auto &atleta : atletas) 
    {
        actualizarMedalleroDep(medallero, atleta.departamento, atleta.oro, atleta.plata, atleta.bronce);
    }
}

void mostrarMedalleroFinal(const vector<MedalleroDepartamento> &medallero) 
{
    cout << "\n=========================================" << endl;
    cout << "           MEDALLERO FINAL               " << endl;
    cout << "=========================================" << endl;
    for (const auto &m : medallero) 
    {
        cout << "Departamento: " << m.departamento << endl;
        cout << "  [Oro: " << m.oro << " | Plata: " << m.plata << " | Bronce: " << m.bronce << "]" << endl;
        cout << "  Total Medallas: " << (m.oro + m.plata + m.bronce) << endl;
        cout << "----------------------------------------" << endl;
    }
}

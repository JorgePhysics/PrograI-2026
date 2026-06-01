// Materia: Programación I, Paralelo 4
// Autor: Jorge Alberto Delgadillo Velasquez
// Fecha creación: 22/05/2026

/*Inventario de productos en una tienda 
Descripción: Define una estructura llamada Producto con los siguientes campos: 
•  nombre (cadena de caracteres) •  codigo (cadena de caracteres) •  precio (decimal) •  cantidad_en_inventario (entero) •  observaciones (cadena de caracteres) 
Luego, escribe un programa que permita: •  Registrar N productos en el inventario. •  Mostrar el producto más caro en el inventario. •  Mostrar la cantidad total de productos en inventario. •  Si un producto se encuentra con cantidad_en_inventario menor a 5, en el campo observaciones debe tener un mensaje de advertencia “PRUDUCTO CON BAJA CANTIDAD DE INVENTARIO"
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Producto 
{
    string nombre;
    string codigo;
    double precio;
    int cantidad_en_inventario;
    string observaciones;
};

void registrarInventario(vector<Producto> &inventario);
Producto obtenerProductoMasCaro(const vector<Producto> &inventario);
int calcularTotalProductos(const vector<Producto> &inventario);
void verificarAlertasStock(vector<Producto> &inventario);
void mostrarInventarioCompleto(const vector<Producto> &inventario);

int main() 
{
    int n;
    cout << "Ingrese la cantidad de productos a registrar: ";
    cin >> n;

    if (n <= 0) return 1;

    vector<Producto> inventario(n);
    registrarInventario(inventario);
    
    verificarAlertasStock(inventario);
    Producto masCaro = obtenerProductoMasCaro(inventario);
    int totalItems = calcularTotalProductos(inventario);

    cout << "\n=========================================" << endl;
    cout << "PRODUCTO MAS CARO: " << masCaro.nombre << " (" << masCaro.precio << " Bs.)" << endl;
    cout << "TOTAL DE UNIDADES EN INVENTARIO: " << totalItems << endl;
    cout << "=========================================" << endl;

    mostrarInventarioCompleto(inventario);

    return 0;
}

void registrarInventario(vector<Producto> &inventario) 
{
    for (size_t i = 0; i < inventario.size(); i++) 
    {
        cout << "\nProducto #" << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin >> ws, inventario[i].nombre);
        cout << "Codigo: ";
        getline(cin, inventario[i].codigo);
        cout << "Precio: ";
        cin >> inventario[i].precio;
        cout << "Cantidad en inventario: ";
        cin >> inventario[i].cantidad_en_inventario;
        inventario[i].observaciones = "OK";
    }
}

Producto obtenerProductoMasCaro(const vector<Producto> &inventario) 
{
    Producto caro = inventario[0];
    for (size_t i = 1; i < inventario.size(); i++) 
    {
        if (inventario[i].precio > caro.precio) 
        {
            caro = inventario[i];
        }
    }
    return caro;
}

int calcularTotalProductos(const vector<Producto> &inventario) 
{
    int total = 0;
    for (const auto &p : inventario) 
    {
        total += p.cantidad_en_inventario;
    }
    return total;
}

void verificarAlertasStock(vector<Producto> &inventario) 
{
    for (auto &p : inventario) 
    {
        if (p.cantidad_en_inventario < 5) 
        {
            p.observaciones = "PRUDUCTO CON BAJA CANTIDAD DE INVENTARIO";
        }
    }
}

void mostrarInventarioCompleto(const vector<Producto> &inventario) 
{
    cout << "\n--- REPORTE FINAL DE INVENTARIO ---" << endl;
    for (const auto &p : inventario) 
    {
        cout << "\nCodigo: " << p.codigo << " | Producto: " << p.nombre << endl;
        cout << "Precio: " << p.precio << " Bs. | Cantidad: " << p.cantidad_en_inventario << endl;
        cout << "Observaciones: " << p.observaciones << endl;
    }
}

// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Tarea
{
    string descripcion;
    bool completada;
};
void Ingresar_Tareas(vector<Tarea>& Tareas, int N)
{
    cin.ignore();
    for(int i = 0; i < N; i++)
    {
        cout << "Ingrese la descripcion de la tarea: ";
        getline(cin, Tareas[i].descripcion);
        Tareas[i].completada = false;
    }
}
void Mostrar_Pendientes(vector<Tarea>& Tareas, int N)
{
    cout << "\n--- TAREAS PENDIENTES ---" << endl;
    for(int i = 0; i < N; i++)
    {
        if(Tareas[i].completada == false)
        {
            cout << i << ". " << Tareas[i].descripcion << endl;
        }
    }
}
void Completar_Tarea(vector<Tarea>& Tareas, int N)
{
    int indice;
    Mostrar_Pendientes(Tareas, N);
    cout << "\nIngrese el indice de la tarea que desea completar: ";
    cin >> indice;
    if(indice >= 0 && indice < N)
    {
        if(Tareas[indice].completada == false)
        {
            Tareas[indice].completada = true;
            cout << "Tarea completada correctamente." << endl;
        }
        else
        {
            cout << "Esta tarea ya estaba completada." << endl;
        }
    }
    else
    {
        cout << "Indice invalido." << endl;
    }
}
void Opciones(vector<Tarea>& Tareas, int N)
{
    int opcion;
    do
    {
        cout << "\n--- GESTION DE TAREAS ---" << endl;
        cout << "1. Mostrar las tareas pendientes" << endl;
        cout << "2. Completar tarea" << endl;
        cout << "0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        switch(opcion)
        {
        case 1:
            Mostrar_Pendientes(Tareas, N);
            break;
        case 2:
            Completar_Tarea(Tareas, N);
            break;
        case 0:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    } while(opcion != 0);
}
int main()
{
    int N;
    cout << "Ingrese la cantidad de tareas: ";
    cin >> N;
    if(N <= 0)
    {
        cout << "Cantidad invalida." << endl;
        return 0;
    }
    vector<Tarea> Tareas(N);
    Ingresar_Tareas(Tareas, N);
    Opciones(Tareas, N);
    return 0;
}
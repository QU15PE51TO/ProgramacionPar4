// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Contacto
{
    string nombreCompleto;
    int telefono;
};
void Ingresar_Contactos(vector<Contacto>& Contactos, int N)
{
    cin.ignore();
    for(int i = 0; i < N; i++)
    {
        cout << "\n--- Contacto " << i + 1 << " ---" << endl;
        cout << "Nombre completo: ";
        getline(cin, Contactos[i].nombreCompleto);
        cout << "Telefono: ";
        cin >> Contactos[i].telefono;
        cin.ignore();
    }
}
void Buscar_Contacto(vector<Contacto>& Contactos, int N, string busqueda)
{
    for(int i = 0; i < N; i++)
    {
        if(Contactos[i].nombreCompleto.find(busqueda) != string::npos)
        {
            cout << "\nContacto encontrado:" << endl;
            cout << "Nombre: " << Contactos[i].nombreCompleto << endl;
            cout << "Telefono: " << Contactos[i].telefono << endl;
        }
    }
}
int main()
{
    int N;
    string busqueda;
    cout << "Ingrese la cantidad de contactos: ";
    cin >> N;
    if(N <= 0)
    {
        cout << "Cantidad invalida." << endl;
        return 0;
    }
    vector<Contacto> Contactos(N);
    Ingresar_Contactos(Contactos, N);
    cout << "\nIngrese el nombre a buscar: ";
    getline(cin, busqueda);
    Buscar_Contacto(Contactos, N, busqueda);
    return 0;
}
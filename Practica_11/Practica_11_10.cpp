// Materia: Programacion I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creacion: 24/11/2026
// Ejercicio: Gestion de Torneo
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Equipo
{
    string nombre;
    int partidosJugados;
    int victorias;
    int puntosTotales;
};
void Registrar_Equipos(vector<Equipo>& Equipos, int N)
{
    cin.ignore();
    for(int i = 0; i < N; i++)
    {
        cout << "\n--- Equipo " << i + 1 << " ---" << endl;
        cout << "Ingrese el nombre del equipo: ";
        getline(cin, Equipos[i].nombre);

        Equipos[i].partidosJugados = 0;
        Equipos[i].victorias = 0;
        Equipos[i].puntosTotales = 0;
    }
}
void Simular_Partido(vector<Equipo>& Equipos)
{
    int Equipo1, Equipo2, Ganador;
    Equipo1 = rand() % Equipos.size();
    Equipo2 = rand() % Equipos.size();
    while(Equipo1 == Equipo2)
    {
        Equipo2 = rand() % Equipos.size();
    }
    cout << "\n--- PARTIDO ---" << endl;
    cout << Equipos[Equipo1].nombre << " VS "
         << Equipos[Equipo2].nombre << endl;
    Ganador = rand() % 2;
    if(Ganador == 0)
    {
        Equipos[Equipo1].partidosJugados++;
        Equipos[Equipo1].victorias++;
        Equipos[Equipo1].puntosTotales += 3;
        Equipos[Equipo2].partidosJugados++;
        cout << "Ganador: " << Equipos[Equipo1].nombre << endl;
    }
    else
    {
        Equipos[Equipo2].partidosJugados++;
        Equipos[Equipo2].victorias++;
        Equipos[Equipo2].puntosTotales += 3;
        Equipos[Equipo1].partidosJugados++;
        cout << "Ganador: " << Equipos[Equipo2].nombre << endl;
    }
}
void Clasificacion(vector<Equipo>& Equipos, int N)
{
    int mayor;
    for(int i = 0; i < N - 1; i++)
    {
        mayor = i;
        for(int j = i + 1; j < N; j++)
        {
            if(Equipos[j].puntosTotales > Equipos[mayor].puntosTotales)
            {
                mayor = j;
            }
        }
        if(mayor != i)
        {
            Equipo Auxiliar = Equipos[i];
            Equipos[i] = Equipos[mayor];
            Equipos[mayor] = Auxiliar;
        }
    }
}
void Tabla_Posiciones(vector<Equipo>& Equipos, int N)
{
    cout << "\n========== TABLA DE POSICIONES ==========" << endl;
    cout << "Pos.\tEquipo\t\tJugados\tVictorias\tPuntos" << endl;
    for(int i = 0; i < N; i++)
    {
        cout << i + 1 << "\t"
             << Equipos[i].nombre << "\t\t"
             << Equipos[i].partidosJugados << "\t"
             << Equipos[i].victorias << "\t\t"
             << Equipos[i].puntosTotales << endl;
    }
}
int main()
{
    int N, Partidos;
    srand(time(0));
    cout << "Ingrese la cantidad de equipos: ";
    cin >> N;
    if(N < 2)
    {
        cout << "Se necesitan al menos 2 equipos." << endl;
        return 0;
    }
    vector<Equipo> Equipos(N);
    Registrar_Equipos(Equipos, N);
    cout << "\nIngrese la cantidad de partidos a simular: ";
    cin >> Partidos;
    if(Partidos < 0)
    {
        cout << "Cantidad invalida." << endl;
        return 0;
    }
    for(int i = 0; i < Partidos; i++)
    {
        Simular_Partido(Equipos);
    }
    Clasificacion(Equipos, N);
    Tabla_Posiciones(Equipos, N);
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor:Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
using namespace std;
struct Jugador
    {
        char nickname[30];
        int experiencia;
        int nivel;
    };
void Reinicio_de_nivel(Jugador &Player, int punto )
{
    punto=punto+Player.experiencia;
    if(Player.experiencia>=100)
    {
        Player.nivel++;
        Player.experiencia=0;
    }
}
int main ()
{
    Jugador Player;
    int puntos;
    cout<<"Ingrese el nombre del jugador: ";
    cin.ignore();
    cin.getline(Player.nickname,30);
    cout << "Ingrese el nivel: ";
    cin >> Player.nivel;
    cout << "Ingrese la experiencia: ";
    cin >> Player.experiencia;
    Reinicio_de_nivel(Player,Player.experiencia);
    cout << "\n--- DATOS DEL JUGADOR ---" << endl;
    cout << "Nickname: " << Player.nickname << endl;
    cout << "Nivel: " << Player.nivel << endl;
    cout << "Experiencia: " << Player.experiencia << endl;
    return 0;
}
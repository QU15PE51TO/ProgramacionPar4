// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include<iostream>
using namespace std;
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas=totalSegundos/3600;
    minutos=totalSegundos/60;
    segundos=totalSegundos;
}
int main()
{
    int Tsegundos;
    int horas;
    int minutos;
    int segundos;
    cout << "Ingrese segundos: " <<endl;
    cin >> Tsegundos;
    calcularTiempo(Tsegundos,horas,minutos,segundos);
    cout<< "La hora es: "<< horas <<endl;
    cout<< "Los minutos son: "<< minutos<<endl;
    cout<< "Los segundos son: "<< segundos<<endl;
    return 0;
}
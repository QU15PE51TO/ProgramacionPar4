// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
using namespace std;
struct Tiempo
{
    int hora;
    int minuto;
    int segundo;
};
void Calculadora(Tiempo T1,Tiempo T2,Tiempo &resultados)
{
    resultados.segundo=T1.segundo+T2.segundo;
    resultados.minuto=T1.minuto+T2.minuto;
    resultados.hora=T1.hora+T2.hora;
    if(resultados.minuto>59)
    {
        resultados.minuto=resultados.minuto-60;
        resultados.hora++;
    }
    if(resultados.segundo>59)
    {
        resultados.segundo=resultados.segundo-60;
        resultados.minuto++;
    }
}
int main ()
{
    Tiempo T1;
    Tiempo T2;
    Tiempo resu;
    cout << "Ingrese las horas del primer tiempo: ";
    cin >> T1.hora;
    cout << "Ingrese los minutos: ";
    cin >> T1.minuto;
    cout << "Ingrese los segundos: ";
    cin >> T1.segundo;

    cout << "\nIngrese las horas del segundo tiempo: ";
    cin >> T2.hora;
    cout << "Ingrese los minutos: ";
    cin >> T2.minuto;
    cout << "Ingrese los segundos: ";
    cin >> T2.segundo;

    Calculadora(T1,T2,resu);

    cout << "\n--- TIEMPO TOTAL ---" << endl;
    cout << "Horas: " << resu.hora << endl;
    cout << "Minutos: " << resu.minuto << endl;
    cout << "Segundos: " << resu.segundo << endl;
}

// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
int Aleatorios(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
void generador_Nombres(vector<string>& nombres)
{
    vector<string> nombresiniciales = {"Mateo", "Valeria", "Lucas", "Camila", "Diego","Sofia", "Matias", "Luciana", "Gabriel", "Daniela"};
    for (int i = 0; i < 10; i++)
    {
        int num = Aleatorios(0, 9);
        nombres[i] = nombresiniciales[num];
    }
}
void generador_Apellidos(vector<string>& apellidos)
{
    vector<string> Apellidosiniciales = {"Silva", "Rojas", "Fernandez", "Morales", "Paredes", "Huanca", "Vargas", "Quispe", "Mamani" ,"Choque"};
    for (int i = 0; i < 10; i++)
    {
        int num = Aleatorios(0, 9);
        apellidos[i] = Apellidosiniciales[num];
    }
}
void Imprimir_Nombres_y_Apellidos(vector<string> nombres,vector<string> apellidos)
{
    for (int i=0;i<10;i++)
    {
        cout<<nombres[i]<<"\t"<<apellidos[i]<<endl;
    }
}
int main()
{
    srand(time(0));
    vector<string> nombres(10);
    vector<string> apellidos(10);
    generador_Nombres(nombres);
    generador_Apellidos(apellidos);
    Imprimir_Nombres_y_Apellidos(nombres,apellidos);
}

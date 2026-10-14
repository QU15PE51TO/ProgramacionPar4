// Materia: Programación I, Paralelo 4 
// Autor: Kevin Javier Quispe Mamani. 
// Fecha creación: 13/10/2026 
// Número de ejercicio: 5
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Generador_de_matrices(char matriz[100][100],int fila, int columna);
void Reservar_asientos(char matriz[100][100]);
void Generador_de_matrices(char matriz[100][100],int fila, int columna)
{
    int asiento=1;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            cout<<asiento<<"-"<<matriz[i][j]<<"\t";
            asiento++;
        }
        cout<<endl;
    }
}
void generadordematrices(char matriz[100][100],int fila, int columna)
{
    for (int i=0;i<fila;i++)
        {
            for (int j=0;j<columna;j++)
            {   
                matriz[i][j]='L';
            }
        }
}
void Reservar_asientos(char matriz[100][100])
{
    int asiento;
    cout<<"anote el numero del asiento"<<endl;
    cin>>asiento;
    int fila=(asiento-1)/5;
    int columna=(asiento-1)%5;
    if (matriz[fila][columna]=='L')
    {
        matriz[fila][columna]='O';
        cout<<"reserva exitosa"<<endl;
    }
    else
    {
        cout << "asiento reservado"<<endl;
    }
}
void Porcentaje_de_las_sillas(char matriz[100][100])
{
    int fila=5;
    int columna=5;
    int libres=0;
    int ocupados=0;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if (matriz[i][j]=='L')
            {
                libres++;
            }
            else
            {
                ocupados++;
            }
        }
    }
    cout << "El numero de asientos libres es: "<<libres<<endl;
    cout << "El numero de asientos ocupados es: "<<ocupados<<endl;
    cout << "El porcentaje de asientos libres es: "<<libres*100/25<<endl;
    cout << "El porcentaje de asientos ocupados es: "<<ocupados*100/25<<endl;
}
int main()
{
    int opcion;
    int fila=5;
    int columna=5;
    char matriz[100][100];
    generadordematrices(matriz,fila,columna);
    do
    {
        cout<<"1. mostrar la sala"<<endl;
        cout<<"2. pedir asiento"<<endl;
        cout<<"3. mostrar el porcentaje de asientos libres y ocupados"<<endl;
        cout<<"4. salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
            case 1:
            Generador_de_matrices(matriz,fila,columna);
            break;
            case 2:
            Reservar_asientos(matriz);
            break;
            case 3:
            Porcentaje_de_las_sillas(matriz);
            break;
        default:
            break;
        }
    }
    while (opcion!=4);
}

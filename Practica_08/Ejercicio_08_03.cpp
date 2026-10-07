// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 06/10/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void conteodedigitos(int &digito,long long &numero);
void guardavectores(int digito,vector<int>&tarjeta,int i);
void sumadevectores(vector<int>trabajo,int &suma,int i);
void verificar(int suma);
int main ()
{
    int suma=0;
    long long numero;
    int digito;
    vector<int> tarjeta (16);
    cout << "introduce la tejerta"<<endl;
    cin >> numero;
    for(int i=0;i<16;i++)
    {
        conteodedigitos(digito,numero); 
        guardavectores(digito,tarjeta,i);
        sumadevectores(tarjeta,suma,i);
    }
    cout<<suma<<endl;
    verificar(suma);
    
}
void conteodedigitos(int &digito,long long &numero)
{
    digito = numero%10;
    numero = numero/10;
}
void guardavectores(int digito,vector<int>&tarjeta,int i)
{
    tarjeta[i]=digito;
    if (i %2!=0)
    {
        tarjeta[i]=tarjeta[i]*2;
        if (tarjeta[i]>9)
        {
            tarjeta[i]=tarjeta[i]-9;
        }    
    }
}
void sumadevectores(vector<int>trabajo,int &suma,int i)
{
    suma = suma+trabajo[i];
}
void verificar(int suma)
{
    if (suma %10==0)
    {
        cout<< "tarjeta valida";
    }
    else 
    {
        cout<< "tarjeta invalida";
    }
}

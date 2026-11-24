// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
#include <vector>
using namespace std;
struct Mercado
{
    string Alimentos;
    string Codigo;
    double precio;
};
void Pide_alimentos(vector<Mercado> &Super, int N)
{
    cin.ignore();
    for(int i=0;i<N;i++)
    {
        cout<<"Ingrese el nombre del producto: "<<endl;
        getline(cin,Super[i].Alimentos);
        cout<<"Ingrese el Codigo del producto: "<<endl;
        getline(cin,Super[i].Codigo);
        cout<<"Ingrese el Precio del producto: "<<endl;
        cin>> Super[i].precio;
        cin.ignore();
    }
}
void Precio_Mayor(vector<Mercado>& Numeros, int N)
{
    int Guardar_vector=0;
    double mayor = Numeros[0].precio;
    for(int i = 1; i < N; i++)
    {
        if(Numeros[i].precio > mayor)
        {
            mayor = Numeros[i].precio;
            Guardar_vector=i;
        }
    }
    cout<<"El producto mas caro es: "<<Numeros[Guardar_vector].Alimentos<<endl;
    cout<<"El Precio es: "<<Numeros[Guardar_vector].precio<<endl;
    cout<<"El Codigo del producto es: "<<Numeros[Guardar_vector].Codigo<<endl;
}
void Precio_Menor(vector<Mercado>& Numeros, int N)
{
    double menor = Numeros[0].precio;
    int Guardar_vector=0;
    for(int i = 1; i < N; i++)
    {
        if(Numeros[i].precio < menor)
        {
            menor = Numeros[i].precio;
            Guardar_vector=i;
        }
    }
    cout<<"El producto mas caro es: "<<Numeros[Guardar_vector].Alimentos<<endl;
    cout<<"El Precio es: "<<Numeros[Guardar_vector].precio<<endl;
    cout<<"El Codigo del producto es: "<<Numeros[Guardar_vector].Codigo<<endl;
}
int main()
{
    int N;
    cout<<"Ingrese la cantidad de productos: ";
    cin>>N;
    vector<Mercado> Super(N);
    Pide_alimentos(Super,N);
    Precio_Mayor(Super,N);
    Precio_Menor(Super,N);
}
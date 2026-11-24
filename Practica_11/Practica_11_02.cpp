// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
using namespace std;
struct Usuario
{
    char Persona[30];
    int numero_de_cuenta;
    double Saldo;
};
void Ingresar_dinero(Usuario &Plata);
void Retirar_dinero(Usuario &Plata);
void Banco(Usuario &Plata)
{
    int opcion;
    cout<<"1. presione si quiere ingresar dinero"<<endl;
    cout<<"2. presione si quiere retirar dinero"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        Ingresar_dinero(Plata);
        break;
    
    default:
        Retirar_dinero(Plata);
        break;
    }
}
void Ingresar_dinero(Usuario &Plata)
{
    int suma;
    cout<<"Ingrese cuanto quiere meter: ";
    cin>>suma;
    Plata.Saldo=Plata.Saldo+suma;
}
void Retirar_dinero(Usuario &Plata)
{
    int resta;
    cout<<"Ingrese cuanto quiere sacar: ";
    cin>>resta;
    Plata.Saldo=Plata.Saldo-resta;
    if(Plata.Saldo<0)
    {
        cout<<"Vuelva A ingresar el monto: ";
        cin>>resta;
        Plata.Saldo=Plata.Saldo-resta;
    }
}
int main ()
{
    Usuario banco;
    banco.Saldo=100;
    cout<<"Ingrese el nombre: ";
    cin.getline(banco.Persona,31);
    cout<<"Ingrese el numero de cuenta";
    cin>>banco.numero_de_cuenta;
    Banco(banco);
    cout<< "Su numbre es: "<<banco.Persona<<endl;
    cout<< "El nro de cuenta es: "<<banco.numero_de_cuenta<<endl;
    cout<< "Su saldo es de: "<<banco.Saldo<<endl;
}
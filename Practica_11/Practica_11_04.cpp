// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct Delivery
{
    char Codigorastreo[50];
    char direccion[50];
    double peso;
    char estado[20];
};
void Imprime_Rastre_de_Paquetes(Delivery &Paquete)
{
    strcpy (Paquete.estado,"Entrgado");
    cout<< "Datos del Paquete"<<endl;
    cout<< "Codigo de Rastreo: "<<Paquete.Codigorastreo<<endl;
    cout<< "Peso del Paquet: "<<Paquete.peso<<endl;
    cout<< "Direccion: "<<Paquete.direccion<<endl;
    cout<< "Estado del Paquete: "<<Paquete.estado<<endl;
    cout << "Tamano de la estructura: " << sizeof(Delivery) << " bytes" << endl;
}
void Escribe_datos_del_Paquete(Delivery &Paquete)
{
    strcpy (Paquete.estado,"En Transito");
    cout<<"Escribe el codigo del Paquete: ";
    cin>>Paquete.Codigorastreo;
    cout<<"Escribe el peso del paquete: ";
    cin>>Paquete.peso;
    cin.ignore();
    cout<<"Escribe la direccion: ";
    cin.getline(Paquete.direccion,50);
}   
int main()
{
    Delivery Paquete;
    Escribe_datos_del_Paquete(Paquete);
    Imprime_Rastre_de_Paquetes(Paquete);
    return 0;
}
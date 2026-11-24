// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
#include <vector>
using namespace std;
struct Musica
{
    char artista[50];
    char titulo[50];
    int segundos;
};
void Calculo_de_segundos(vector<Musica>&Canciones,int N);
void Datos_de_Artista(vector<Musica>&Canciones,int N)
{
    cin.ignore();
    for(int i=0;i<N;i++)
    {
        cout <<"Nombre del Artista: ";
        cin.getline(Canciones[i].artista,50);
        cout <<"Nombre del titulo: ";
        cin.getline(Canciones[i].titulo,50);
        cout <<"Duracion del la Musica: ";
        cin>>Canciones[i].segundos; 
        cin.ignore();
    }
}
void Datos_Imprimidos(vector<Musica>&Canciones,int N)
{
    int minutos;
    int segundos;
    for (int i=0;i<N;i++)
    {
        cout<< "Nombre de la musica: "<<Canciones[i].titulo<<endl;
        cout<< "Nombre del Artista: "<<Canciones[i].artista<<endl;
        minutos=Canciones[i].segundos/60;
        segundos=Canciones[i].segundos%60;
        cout<< "En la Musica hay "<<minutos<<" min con "<<segundos<<"seg"<<endl;
    }
    
}
int main ()
{
    int N;
    cout<<"ingrese el numero de canciones: "<<endl;
    cin>>N;
    vector<Musica>canciones (N);
    Datos_de_Artista(canciones,N);
    Datos_Imprimidos(canciones,N);
}
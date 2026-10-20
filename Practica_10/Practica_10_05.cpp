// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 5
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
void Imprime_de_letras(vector<char>&letras,string palabra);
void burbuja(vector <char> &letras,string palabra);
void Generador_de_letras(vector<char>&letras,string palabra);
int main()
{
    string palabra;
    vector<char>letras;
    cout<<"Ingrese la palabra: "<<endl;
    cin >> palabra;
    Generador_de_letras(letras,palabra);
    burbuja(letras,palabra);
    Imprime_de_letras(letras,palabra);

}
void burbuja(vector <char> &letras,string palabra)
{
    char aux;
    for(int i=0;i<palabra.size()-1;i++)
    {
        for(int j=0;j<palabra.size()-1-i;j++)
        {
            if (letras [j]>letras[j+1])
            {
            aux = letras[j];
            letras[j]=letras[j+1];
            letras[j+1]=aux;
            }
        }
    }
}
void Generador_de_letras(vector<char>&letras,string palabra)
{
    for (int i=0;i<palabra.size();i++)
        {
            letras.push_back(palabra[i]);
        }
}
void Imprime_de_letras(vector<char>&letras,string palabra)
{
    for (int i=0;i<palabra.size();i++)
        {
            cout<<letras[i];
        }
}
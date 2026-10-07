// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 06/10/2026
#include <iostream>
#include <string>
using namespace std;

void corregir(string &texto)
{
    string resultado;
    bool espacio = false;

    for(int i = 0; i < texto.size(); i++)
    {
        if(texto[i] != ' ')
        {
            resultado.push_back(texto[i]);
            espacio = false;
        }
        else
        {
            if(resultado.size() > 0 && espacio == false)
            {
                resultado.push_back(' ');
                espacio = true;
            }
        }
    }

    // Eliminar el espacio del final si quedó uno
    if(resultado.size() > 0 && resultado[resultado.size() - 1] == ' ')
    {
        resultado.pop_back();
    }

    texto = resultado;
}

int main()
{
    string texto;

    cout << "Ingrese el texto: ";
    getline(cin, texto);

    corregir(texto);

    cout << "Resultado: " << texto << endl;

    return 0;
}

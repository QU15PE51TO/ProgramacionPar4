// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 06/10/2026
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
bool contraseñaSegura(string contraseña)
{
    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;

    if (contraseña.length() < 8)
    {
        return false;
    }

    for (int i = 0; i < contraseña.length(); i++)
    {
        if (isupper(contraseña[i]))
        {
            mayuscula = true;
        }
        else if (islower(contraseña[i]))
        {
            minuscula = true;
        }
        else if (isdigit(contraseña[i]))
        {
            numero = true;
        }
        else
        {
            especial = true;
        }
    }

    return mayuscula && minuscula && numero && especial;
}
int main()
{
    string contrasenia;
    cout << "Introduce la contracenia"<<endl;
    cin >> contrasenia;
    if (contraseñaSegura(contrasenia))
    {
        cout << "contrasenia segura" <<endl;
    }
    else
    {
        cout << "contrasenia insegura"<<endl;
    }
    return 0;
}

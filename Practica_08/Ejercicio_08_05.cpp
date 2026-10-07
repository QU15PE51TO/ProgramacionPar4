#include <iostream>
#include <string>
using namespace std;
void separarURL(string url)
{
    int posicion1;
    int posicion2;
    posicion1 = url.find("://");
    string protocolo = url.substr(0, posicion1);
    posicion2 = url.find("/", posicion1 + 3);
    string dominio = url.substr(posicion1 + 3, posicion2 - (posicion1 + 3));
    string ruta = url.substr(posicion2);
    cout << "Protocolo: " << protocolo << endl;
    cout << "Dominio: " << dominio << endl;
    cout << "Ruta: " << ruta << endl;
}
int main()
{
    string url;
    cout << "Ingrese una URL: ";
    cin >> url;
    separarURL(url);
    return 0;
}
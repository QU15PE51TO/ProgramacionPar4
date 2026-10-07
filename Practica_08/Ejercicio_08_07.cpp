// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 06/10/2026
#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
using namespace std;
void hashtags(string texto)
{
    vector<string> etiquetas;
    string palabra;
    stringstream ss(texto);
    while (ss >> palabra) {
        if (!palabra.empty() && palabra[0] == '#') {
            etiquetas.push_back(palabra);
        }
    }
    cout << "Lista de hashtags: [";
    for (size_t i = 0; i < etiquetas.size(); i++) {
        cout << etiquetas[i];
        if (i < etiquetas.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
int main()
{
    string texto;
    cout << "Ingrese el texto: ";
    getline(cin, texto);
    hashtags(texto);
    return 0;
}

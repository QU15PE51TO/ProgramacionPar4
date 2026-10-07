// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 06/10/2026
#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;
bool detectar_plagio(const string& oracionA, const string& oracionB) {
    stringstream ssB(oracionB);
    string palabra;
    set<string> palabrasB;
    while (ssB >> palabra) {
        palabrasB.insert(palabra);
    }
    stringstream ssA(oracionA);
    int coincidencias = 0;
    set<string> palabrasA_procesadas; 
    while (ssA >> palabra) {
        if (palabrasA_procesadas.find(palabra) == palabrasA_procesadas.end()) {
            palabrasA_procesadas.insert(palabra); 
            if (palabrasB.find(palabra) != palabrasB.end()) {
                coincidencias++;
            }
        }
    }
    return coincidencias > 3;
}
int main() {
    string oracionA = "El sistema fue desarrollado en C++";
    string oracionB = "El nuevo sistema fue codificado en C++";
    bool resultado = detectar_plagio(oracionA, oracionB);
    cout << "Alerta de plagio: " << (resultado ? "Verdadero" : "Falso") << endl;
    return 0;
}

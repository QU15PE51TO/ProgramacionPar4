#include <iostream>
using namespace std;
int main()
{
    int vector[100];
    int numero;
    int cantidad=0;
    while(cantidad<100)
    {        
        cout << "Ingrese un numero" <<endl;
        cin >> numero;
        if (numero < 0)
        {
            break;
        }
        vector[cantidad]=numero;
        cantidad++;
    }
    cout << "Elementos introducidos: ";

    for (int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }
}
#include <iostream>
using namespace std;
int main ()
{
    int N=0;
    int suma=0;
    cout<<"introduce un numero: ";
    cin >> N;
    for (int i =1;i<N;i++)
    {
        if(N %i == 0)
        {
            suma = suma + i;
        }
    }
    if (suma == N)
    {
        cout << N << "es un numero perfecto"<<endl;
    }
    else 
    {
        cout << N << "no es un numero perfecto"<<endl;
    }
    return 0;
}
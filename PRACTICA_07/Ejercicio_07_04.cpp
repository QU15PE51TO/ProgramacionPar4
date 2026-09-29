#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Introduce la dimencion de los vectores"<<endl;
    cin >>N;
    int vector1[N];
    int vector2[N];
    int Resultado[N];
    cout<<"Ingrese los datos del primer vector"<<endl;
    for(int i=0;i<N;i++)
    {
        cin >> vector1[i];
    }
    cout <<"Ingrese los datos del segundo vector"<<endl;
    for(int i=0;i<N;i++)
    {
        cin >> vector2[i];
    }
    for (int i=0;i<N;i++)
    {
        Resultado[i]=vector1[i]*vector2[i];
    }
    for (int i=0;i<N;i++)
    {
        cout<<Resultado[i]<<"  ";
    }
}
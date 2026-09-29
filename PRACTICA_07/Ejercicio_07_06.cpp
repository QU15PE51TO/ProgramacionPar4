#include <iostream>
using namespace std;
int main()
{
    int vector1[5];
    int vector2[5];
    int vector3[5];
    cout<<"Ingrese los datos del primer vector"<<endl;
    for(int i=0;i<5;i++)
    {
        cin >> vector1[i];
    }
    cout <<"Ingrese los datos del segundo vector"<<endl;
    for(int i=0;i<5;i++)
    {
        cin >> vector2[i];
    }
    for(int i=0;i<5;i++)
    {
        vector3[i]=vector1[i]+vector2[i];
    }
    for(int i=0;i<5;i++)
    {
        cout << vector3[i]<<"  ";
    }
    return 0;
}
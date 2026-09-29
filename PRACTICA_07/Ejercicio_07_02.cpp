#include <iostream>
#include <vector>
using namespace std;
int main()
{
    double voltios[3][3];
    cout<<"ingrese los 9 digitos"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>voltios[i][j];
        }
    }
    cout <<"Valores de voltaje"<<endl;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<voltios[i][j]<<"  ";
        }
        cout<<endl;
    }    
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int suma=0;
    int resta=0;
    cout << "Ingresa el 1er numero";
    cin >> num1;
    cout << "Ingresa el 2do numero";
    cin >> num2;
    if (num1 > num2)
    {
        for (int i=num1;i>=num2;i--)
        {
            cout<<i<<endl;
        }
    }
    else 
    {
        for(int j=num1;j<=num2;j++)
        {
            cout<<j<<endl;
        }
    }
}
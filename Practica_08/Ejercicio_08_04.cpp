#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string palabra;
    vector<char>letras;
    vector<string> prohibidas = {"manco", "tonto", "noob"};
    cout<<"ingrese una oracion"<<endl;
    getline(cin,palabra);
    for(int i = 0; i < palabra.size(); i++)
        {
            bool encontrada = false;
            for(int j = 0; j < prohibidas.size(); j++)
                {
                    if(palabra.substr(i, prohibidas[j].size()) == prohibidas[j])
                        {
                            for(int k = 0; k < prohibidas[j].size(); k++)
                                {
                                    letras.push_back('*');
                                    cout << '*';
                                }
                            i = i + prohibidas[j].size() - 1;
                            encontrada = true;
                            break;
                        }
        }
        if(encontrada == false)
        {
            letras.push_back(palabra[i]);
            cout << palabra[i];
        }
        }
}
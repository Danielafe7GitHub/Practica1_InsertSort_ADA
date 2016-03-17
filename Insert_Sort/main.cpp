#include <iostream>
#include <vector>
using namespace std;

vector<int> insertion(vector<int>cadena)
{
    for(int j=1;j<cadena.size();j++)
    {
        int key=cadena[j];
        int i=j-1;
        while(i>-1 && cadena[i]>key)
        {
            cadena[i+1]=cadena[i];
            i=i-1;
        }
        cadena[i+1]=key;
    }
return cadena;
}

void imprimir(vector<int>cadena)
{
    for(int i=0;i<cadena.size();i++)
    {
        cout<<cadena[i]<<endl;
    }
}
int main()
{
    vector<int>cadenita;
    cadenita.push_back(31);
    cadenita.push_back(41);
    cadenita.push_back(59);
    cadenita.push_back(26);
    cadenita.push_back(41);
    cadenita.push_back(58);
    cadenita=insertion(cadenita);
    imprimir(cadenita);
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

string mes_correspondente(int mes)
{
    string mestring;
    switch(mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        mestring="31 dias\n";
        break;
    case 2:
        mestring="28 dias\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11:

        mestring="30 dias\n";
        break;
    default:
        mestring="O numero nao tem um mes correspondente";
        break;
        return mestring;
    }

}

int main()
{
    int mes;
    cout << "Insira um numero e vizualize a quantidades de dias correspondente" << endl;
    cin>>mes;
    cout<<mes_correspondente(mes);
    return 0;
}

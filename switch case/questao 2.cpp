#include <iostream>

using namespace std;

int main()
{
    int mes;
    cout << "Insira um numero e vizualize seu mes correspondente" << endl;
    cin>>mes;
    switch(mes)
    {
    case 1:

        cout<<"Janeiro";
        break;
    case 2:

        cout<<"Fevereiro";
        break;
    case 3:

        cout<<"Março";
        break;
    case 4:

        cout<<"Abril";
        break;
    case 5:

        cout<<"Junho";
        break;
    case 6:

        cout<<"Julho";
        break;
    case 7:

        cout<<"Agosto";
        break;
    case 8:

        cout<<"Outubro";
        break;

    case 9:

        cout<<"Setembro";
        break;
    case 10:

        cout<<"Outubro";
        break;
    case 11:

        cout<<"Novembro";
        break;
    case 12:

        cout<<"Dezembro";
        break;
    default:
        cout<<"O numero nao tem um mes correspondente";
        break;

    }
    return 0;
}

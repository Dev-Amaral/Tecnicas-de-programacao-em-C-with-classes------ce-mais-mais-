#include <iostream>
#include<string.h>
#include <locale.h>
using namespace std;
string classe_alimento (int tipo)
{
    string classe;
    switch(tipo)
    {
    case 1:
        classe="Alimento não-perecível";
        break;
    case 2:
    case 3:
    case 4:
        classe="Alimento perecível";
        break;
    case 5:
    case 6:
        classe="Vestuário";
        break;
    case 7:
        classe="Higiene Pessoal";
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        classe="Limpeza e Utensílios Domésticos";
        break;
    default:
        classe="Código inválido";
        break;
        return classe;
    }



}
int main()
{
    setlocale(LC_ALL,"");
    int tipo;
    cout<<"1\t\tAlimento não perecível\n2, 3 ou 4\t\tAlimento perecível\n5 ou 6\t\tVestuário\n7\t\tHigiene Pessoal\n8 até 15\t\tLimpeza e Utensílios domésticos\nQualquer outro código\t\tCódigo Inválido\n";
    cout << "Insira o código de seu produto" << endl;
    cin>>tipo;
    cout<<"Classificação do produto: "<<classe_alimento(tipo)<<endl;
    return 0;
}

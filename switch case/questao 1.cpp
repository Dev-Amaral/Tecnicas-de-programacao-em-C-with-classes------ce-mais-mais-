#include <iostream>

using namespace std;

int main()
{
    float valor;
    int tipo;
    cout<<"Insira o valor total da compra\n";
    cin>>valor;
    cout<<"Insira seu codigo\n1\tCliente comum\n2\tFuncionario\n3\tCliente VIP\n";
    cin>>tipo;
    switch(tipo)
    {
    case 1:
        cout<<"Valor total da compra:R$"<<valor;
        break;
    case 2:
        cout<<"Valor total da compra: R$"<<valor*0.9;
        break;
    case 3:
        cout<<"Valor total da compra: R$"<<valor*0.95;
        break;
    default:
        cout<<"Codigo invalido";
        break;
    }
    return 0;
}

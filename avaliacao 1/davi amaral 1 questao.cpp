#include<iostream>
#include<locale.h>
#include<cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int pedido,refri=0, hamburguer=0, frenchfries=0, sorvete=0, chocolate=0,i=1;
    do
    {

        cout<<"\t\t\t"<<i<<"º pedido\n\n1\t\tRefrigerante 500 ml\n\n2\t\tHamburguer (Carne de Hamburguer, Tomate, Alface, Queijo)\n\n3\t\tBatatas fritas\tPoção 500 g\n\n4\t\tSorvete\n\n5\t\tChocolate Cacau Show 250g \n\n\t\tInsira um valor negativo para sair do sistema\n\n"<<i<<"° Pedido: ";


        cin>>pedido;

        switch(pedido)
        {
        case 1:
            cout<<"Qual a quantidade de refrigerantes?\n";
            cin>>pedido;
            refri+=pedido;
            system("cls");
            break;
        case 2:
            cout<<"Qual a quantidade de Hamburgueres?\n";
            cin>>pedido;
            hamburguer+=pedido;
            system("cls");
            break;
        case 3:
            cout<<"Qual a quantidade de poções de Batata?\n";
            cin>>pedido;
            frenchfries+=pedido;
            system("cls");
            break;
        case 4:
            cout<<"Qual a quantidade de Sorvetes?\n";
            cin>>pedido;
            sorvete+=pedido;
            system("cls");
            break;
        case 5:
            cout<<"Qual a quantidade de chocolates?\n";
            cin>>pedido;
            chocolate+=pedido;
            system("cls");
            break;
        default:
            if(pedido>0)
            {
                cout<<"Pedido Inválido. TENTE NOVAMENTE\n\n";
            }
            break;
        }
        i++;
    }
    while(pedido>0);
    system("cls");
    cout<<"Total de pedidos por refrigerante\t"<<refri<<endl<<endl;
    cout<<"Total de pedidos por hamburguer\t\t"<<hamburguer<<endl<<endl;
    cout<<"Total de pedidos por Batatas fritas\t"<<frenchfries<<endl<<endl;
    cout<<"Total de pedidos por sorvete\t\t"<<sorvete<<endl<<endl;
    cout<<"Total de pedidos por chocolate\t\t"<<chocolate<<endl<<endl;
    return 0;
}

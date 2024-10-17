#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
float buscar (int codigo){
float preco;

switch(codigo){
case 100:
preco=1.7;
break;
case 101:
preco=2.3;
break;
case 102:
preco=2.6;
break;
case 103:
preco=2.4;
break;
case 104:
preco=2.5;
break;
case 105:
preco=1.0;
break;
default:
    preco=0;
break;
}

return preco;

}

int main()
{
    setlocale(LC_ALL,"");
    int codigo,exe=1;
    float total=0;
    string resposta;
    cout<<"Código\tProduto\t\t\tPreço unitário\n";
    cout<<"100\tCachorro Quente\t\tR$ 1.70\n101\tBauro Simples\t\tR$ 2.30\n102\tBauro com ovo\t\tR$ 2.60\n103\tHamburguer\t\tR$ 2.40\n104\tCheeseburguer\t\tR$ 2.50\n105\tRefrigerante\t\tR$ 1.00";
    do{
    cout << "\n\nInsira o código do item que você quer adiquirir\n";
    cin >> codigo;
    total = total + buscar(codigo);
    cout<< "Deseja continuar comprando?(sim ou não)\n";
    cin >> resposta;
    toupper(resposta.at(0));
    exe++;
    } while(resposta.at(0)=='s'and (codigo>=100||codigo<=105));
    cout<< "Valor final: R$ "<<total<<"\n\n";
    return 0;
}

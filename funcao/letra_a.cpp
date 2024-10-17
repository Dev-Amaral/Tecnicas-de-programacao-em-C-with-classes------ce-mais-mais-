#include<iostream>
#include<locale.h>
using namespace std;

float reais(float x, float y){
float valorreal;
valorreal=x*y;
return valorreal;
}

int main(){
setlocale(LC_ALL,"");
float dolar,cot;
cout<<"Insira o valor em dólares\n";
cin>>dolar;
cout<<"Insira a cotação\n";
cin>>cot;
cout<<"Valor em reais: "<<reais(dolar,cot)<<" R$";

}



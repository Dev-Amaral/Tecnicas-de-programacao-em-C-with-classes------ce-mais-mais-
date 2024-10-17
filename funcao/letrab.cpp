#include<iostream>
#include<locale.h>
using namespace std;

void verif(int x){
if(x%2==0 && x%3==0){
cout<<"Este valor é divisível por 2 e 3";
}else{cout<<"Valor inválido";}
return;
}


int main(){
setlocale(LC_ALL,"");
int valor;
cout<<"Digite um valor\n";
cin>>valor;
verif(valor);

}

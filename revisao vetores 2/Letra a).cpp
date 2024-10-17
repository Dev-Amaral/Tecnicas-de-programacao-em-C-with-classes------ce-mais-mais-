#include<iostream>
#include<locale.h>
using namespace std;

int main(){
setlocale(LC_ALL,"");
int x,i;
cout<<"Digite o tamanho dos vetores A [ ] e B [ ]\n\n";
cin>>x;
float A[x],B[x];
for(i=0;i<x;i++){
	cout<<"Digite um valor para A ["<<i<<"]\n";
	cin>>A[i];
	B[i]=A[i]*3;
}
	cout<<"Vetor B:\n";
for(i=0;i<x;i++){
	cout<<"B ["<<i<<"] = "<<B[i]<<endl;
	
}	
	
	return 0;
}
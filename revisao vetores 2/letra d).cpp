#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int x,i,i1;
	cout<<"Qual o tamanho do vetor de caracteres?\n";
	cin>>x;
	char A[x],B[x];
	for(i=0;i<x;i++){
	cout<<"Digite o caractere do "<<i+1<<"º elemento do vetor\n";
	fflush(stdin);
	cin>>A[i];
	B[x-i-1]=A[i];
	}
	
	cout<<"Ordem invertida do vetor armazenado\n";
	for(i=0;i<x;i++){
	cout<<B[i]<<endl;
	Ss}	
}
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{ 
	setlocale(LC_ALL,"");
	
int i,x;
cout<<"Insira um tamanho para o vetores A, B e C\n";
cin>>x;

	float a[x],b[x],c[x],soma=0,maior=-99999999999;
	for(i=0;i<x;i++){
		cout<<"\nInsira o valor de A["<<i<<"]\n";
		cin>>a[i];
	}
	
	for(i=0;i<x;i++){
	cout<<"\nInsira o valor de B["<<i<<"]\n";
	cin>>b[i];
	}
	cout<<"\n\nCálculo do Vetor C:\n";
	for(i=0;i<x;i++){
	c[i]=a[i]-b[i];
	cout<<"C["<<i<<"] = A["<<i<<"] - B["<<i<<"] = "<<c[i]<<endl;
	soma=soma+c[i];
	if(c[i]>=maior){
		maior=c[i];
		}
	}
	cout<<"\nMédia dos elementos do vetor C= "<<soma/x<<endl;
	cout<<"\nMaior elemento do vetor C= "<<maior<<endl;
	return 0;	  
}

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	int i;
	setlocale(LC_ALL,"");
	float B[10],H[10],A[10];
	for(i=0;i<10;i++){
	cout<<"Digite o valor da base do "<<i+1<<"° Quadrado\n";
	cin>>B[i];
	cout<<"Digite o valor da altura do "<<i+1<<"° Quadrado\n";
	cin>>H[i];	
	A[i]=B[i]*H[i];
	cout<<"Valor da área do "<<i+1<<"° Quadrado = \n"<<A[i];
	}
	return 0;	
}
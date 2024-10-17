#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int i;
	float N[15],M[15],m=0;
	for(i=0;i<15;i++){
		cout<<"Digite a nota do "<<i+1<<"º Aluno\n";
		cin>>N[i];
		m=m+M[i]+N[i];
		
	}
	cout<<"Média da turma = "<<m/15;
}
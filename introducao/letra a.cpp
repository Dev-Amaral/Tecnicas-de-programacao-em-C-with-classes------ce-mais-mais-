#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	float n1,n2,n3;
	cout<<"Insira a 1ª nota\n";
	cin>> n1;
	cout<<"Insira a 2ª nota\n";
	cin>> n2;
	cout<<"Insira a 3ª nota\n";	
	cin>>n3;
	cout<<"A média das nota é "<< (n1+n2+n3)/3;
}

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	float n1,n2,n3;
	cout<<"Insira a 1� nota\n";
	cin>> n1;
	cout<<"Insira a 2� nota\n";
	cin>> n2;
	cout<<"Insira a 3� nota\n";	
	cin>>n3;
	cout<<"A m�dia das nota � "<< (n1+n2+n3)/3;
}

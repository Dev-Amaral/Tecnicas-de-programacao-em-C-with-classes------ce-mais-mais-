#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int n1,n2;
	cout<<"Insira a 1° número\n";
	cin>> n1;
	cout<<"Insira a 2° número\n";
	cin>> n2;
	cout<<"Soma= "<<n1+n2;
	return 0;}

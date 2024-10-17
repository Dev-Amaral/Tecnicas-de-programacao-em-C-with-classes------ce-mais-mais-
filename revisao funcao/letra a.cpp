#include<iostream>
#include<locale.h>
using namespace std;

void verificasinal(int x){
	if(x<0){
		cout<<"O valor inserido é negativo";
	} else{
		
		cout<<"O valor inserido é positivo";
	}
	return;
}

int main(){
	setlocale(LC_ALL,"");
	int num;
	cout<<"Digite um valor"<<endl;
	cin>>num;
	verificasinal(num);
}

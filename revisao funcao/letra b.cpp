#include<iostream>

using namespace std;

int potencia (int x,int y){
	int res=1;
	for(int i=y;i>0;i--){
		res=res*x;
	}
	return res;
}


int main(){
	int base,exp;
	cout<<"Insira o valor da base\n";
	cin>>base;
	cout<<"Insira o valor do expoente\n";
	cin>>exp;
	cout<<base<<"^"<<exp<<" = "<<potencia(base,exp);	
	return 0;
}

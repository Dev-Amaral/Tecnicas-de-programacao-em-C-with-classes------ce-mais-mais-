#include<iostream>
#include<string>
#include<locale>
#include <cstdlib>

using namespace std;


struct Funcionario{
	string nome, cargo;
	float salario;
};


float salario_liquido(float salario){
	float salarioliquido = salario - salario*0.1 - salario*0.15;
	return salarioliquido;
}


void exibir_dados(string nome, string cargo,float salario){
	system("cls");
	cout<<"==============================================================================\n";
	cout<<"Nome do funcion�rio:\t\t"<<nome<<endl<<"Cargo exercido:\t\t"<<cargo<<endl<<"Sal�rio L�quido:\t\tR$"<<salario_liquido(salario)<<endl<<endl;
	return;
}


int main(){
	setlocale(LC_ALL,"");
	Funcionario f;
	cout<<"Insira seu nome: ";
	getline(cin,f.nome);
	cout<<"Qual seu cargo: ";
	fflush(stdin);
	getline(cin,f.cargo);
	cout<<"Insira seu sal�rio: ";
	cin>>f.salario;
	exibir_dados(f.nome,f.cargo,f.salario);
	
}

/*Crie uma estrutura chamada "Carro" com os seguintes campos: marca, modelo, ano e preco. Em seguida,
crie uma função para calcular o preço e revenda do carro. A função deve calcular quantos anos o carro tem
de uso e descontar do valor do carro 1% para cada ano de uso.*/

#include<iostream>
#include<string>
#include<locale>

using namespace std;

struct Carro{
	string marca, modelo;
	float preco,ano;
};

float preco_revenda(float ano, float preco){
	float precorevenda= preco-preco*((2023-ano)/100);
	return precorevenda;
}

int main(){
	setlocale(LC_ALL,"");
	Carro c;
	cout<<"Qual a marca do seu carro: ";
	getline(cin,c.marca);
	cout<<"Qual o modelo do seu carro: ";
	fflush(stdin);
	getline(cin,c.modelo);
	cout<<"Quanto o ano do seu carro: ";
	cin>>c.ano;
	cout<<"Qual o preço: ";
	cin>>c.preco;
	cout<<"Preço de revenda do carro: R$"<<preco_revenda(c.ano,c.preco);
	
	
	
}

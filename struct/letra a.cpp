/*Crie uma estrutura representando em aluno do curso de Engenharia Elétrica. A estrutura deve conter a
matrícula do aluno, nome, nota da primeira prova, nota da segunda prova, nota da terceira prova e média.
Criar um vetor de notas dentro da estrutura. Informar os dados de cadastro e se ele foi aprovado ou
reprovado, considerando a média 7 para aprovação.*/
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct Aluno{
	string nome;
	string matricula;
	float notas[3];
	
};

float media(float notas[3]){
	float M=(notas[0]+notas[1]+notas[2])/3;
	return M;
	
}

string situacao (float notas[3]){
	string sit;
	if ((notas[0]+notas[1]+notas[2])/3>=7){
		sit="Aprovado";
	} else 	if ((notas[0]+notas[1]+notas[2])/3>=5){
		sit="Recuperação";
	} else {
		sit="Reprovado";
	}
	return sit;
	
}
int main(){
	setlocale(LC_ALL,"");
	Aluno a;
	cout<<"Insira o nome do aluno: ";
	getline(cin,a.nome);
	cout<<"Insira o número de matrícula: ";
	getline(cin,a.matricula);
	for(int i=0;i<3;i++){
	cout<<"Insira a "<<i+1<<"ª nota";
	cin>>a.notas[i];	
	}
	cout<<"Média do aluno: "<<media(a.notas)<<endl<<"Situação: "<<situacao(a.notas);
	
}

#include <iostream>
#include <string>
#include <locale>
#include <stack>
#include <list>
#include <queue>
#include <cstdlib>

using namespace std;

struct Eleitor {
	string nome;
	string rg;
	int voto;
	int idade;
	int secao;
};

void cadastrar(queue<Eleitor> &fila_menor_60, queue<Eleitor> &fila_maior_60)
{
	Eleitor e;
	cout<<"Nome: ";
	fflush(stdin);
	getline(cin, e.nome);
	cout<<"Nº do RG: ";
	cin>>e.rg;
	cout<<"Idade: ";
	cin>> e.idade;
	cout<<"Seção: ";
	cin>>e.secao;
	
	if(e.idade> 60){
		fila_maior_60.push(e);
	}
	if(e.idade <= 60){
		fila_menor_60.push(e);
	}
}

void votar (queue<Eleitor> &fila_menor_60, queue<Eleitor> &fila_maior_60, stack<Eleitor> &pilha_A, stack<Eleitor> &pilha_B){
	Eleitor e;
	if(!fila_maior_60.empty()){
		e = fila_maior_60.front();
		do{
		cout<<"ELEITOR A VOTAR NESTE MOMENTO:\n"<<e.nome<<endl<<endl;
		cout<<"Insira seu voto\n1 - Candidato A\n2 - Candidato B\n\nVoto: ";
		cin>> e.voto;
		system("cls");
		}while (e.voto != 1 && e.voto != 2);
		if(e.voto == 1){
			pilha_A.push(e);
		} else{
			pilha_B.push(e);
		}
		fila_maior_60.pop();
	} else if(!fila_menor_60.empty()){
		e = fila_menor_60.front();
		do{
		cout<<"ELEITOR A VOTAR NESTE MOMENTO:\n"<<e.nome<<endl<<endl;
		cout<<"Insira seu voto\n1 - Candidato A\n2 - Candidato B\n\nVoto: ";
		cin>> e.voto;
		system("cls");
		}while (e.voto != 1 && e.voto != 2);
		if(e.voto == 1){
			pilha_A.push(e);
			cout<<"SEU VOTO FOI REGISTRADO\n\n";
		} else{
			pilha_B.push(e);
			cout<<"SEU VOTO FOI REGISTRADO\n\n";
		}
		fila_menor_60.pop();		
	} else{
		cout<<"NÃO HÁ ELEITORES PARA VOTAÇÃO\n\n";
	}
}

void imprimir (stack<Eleitor> pilha_A, stack<Eleitor> pilha_B)
{
	//Você nao pediu pora fazer nada com as pilhas de votos dos candidatos apenas pediu para criar as pilhas A e B
	//Logo estou usando para contar a quantidade de votos em cadas pilha
	int votos_A = 0, votos_B = 0;
	while(!pilha_A.empty()){
		votos_A++;
		pilha_A.pop();
	}
	while(!pilha_B.empty()){
		votos_B++;
		pilha_B.pop();
	}
	cout<<"Total de votos do candidato A: "<<votos_A;
	cout<<"\n\nTotal de votos do candidato B: "<<votos_B<<endl<<endl;	
}

void encerrar (queue<Eleitor> &fila_menor_60, queue<Eleitor> &fila_maior_60, list<Eleitor> &lista, stack<Eleitor> &pilha_A, stack<Eleitor> &pilha_B)
{
	Eleitor e;
	list<Eleitor>::iterator i;
	
	cout<<"\tELEIÇÕES ENCERRADAS!\n\n1. TODOS OS ELEITORES SAIAM DAS FILAS\n2. AS PILHAS DE VOTOS SERÃO ESVAZIADAS SEUS DADOS IRÃO PARA UMA LISTA\n3. A LISTA SERÁ VIZUALIZADA E LOGO DEPOIS RESETADA\n\n";
	system("pause");
	system("cls");
	
	while(!pilha_A.empty()){
		e = pilha_A.top();
		lista.push_front(e);
		pilha_A.pop();
	}
	while(!pilha_B.empty()){
		e = pilha_B.top();
		lista.push_front(e);
		pilha_B.pop();
	}
	while (!fila_menor_60.empty()){
		fila_menor_60.pop();
	}
	while (!fila_maior_60.empty()){
		fila_maior_60.pop();
	}
	if(!lista.empty())
	{
		cout<<"LISTA DOS ELEITORES QUE VOTARAM NO CANDIDATO A\n\n";
		for(i = lista.begin(); i != lista.end(); i++)
		{
			if((*i).voto == 1)
			{
				cout<<(*i).nome<<endl;
			}
		}
		cout<<"\n\nLISTA DOS ELEITORES QUE VOTARAM NO CANDIDATO B\n\n";
		for(i = lista.begin(); i != lista.end(); i++)
		{
			{
			if((*i).voto == 2)
			cout<<(*i).nome<<endl;
			}
		}
	} else{
		cout<<"LISTA DE VOTOS VAZIA\n\n";
	}
	cout<<"\n";
	lista.clear();
	
}

void imprimir_votaram_no_100 (stack<Eleitor> pilha_A, stack<Eleitor> pilha_B)
{
	Eleitor e;
	if(pilha_A.empty() && pilha_B.empty()){
	cout<<"NÃO HOUVERAM ELEITORES QUE VOTARAM NA SEÇÃO Nº 100\n\n";	
	}
	while(!pilha_A.empty()){
		e = pilha_A.top();
		if (e.secao == 100){
		cout<<e.nome<<endl<<endl;
		}
		pilha_A.pop();
	}
	while(!pilha_B.empty()){
		e = pilha_B.top();
		if (e.secao == 100){
		cout<<e.nome<<endl<<endl;
		}
		pilha_B.pop();
	}
}



int main(){
	setlocale(LC_ALL,"portuguese");
	int opc;
	list<Eleitor> lista;
	stack<Eleitor> pilha_A;
	stack<Eleitor> pilha_B;
	queue<Eleitor> fila_menor_60;
	queue<Eleitor> fila_maior_60;
	do{
		cout<<"1 - Cadastrar eleitor e incluir na fila\n2 - Tirar eleitor da fila para votar\n3 - Imprimir total de votos dos candidatos A e B\n4 - Encerrar eleição e imprimir a lista de eleitores\n5 - Imprimir eleitores que votaram na seção 100";
		cout<<"\n0 - Sair\n\nOpção: ";
		cin>> opc;
		system("cls");
		switch (opc){
			case 1:{
				cadastrar(fila_menor_60, fila_maior_60);
				break;
			}
			case 2:{
				votar (fila_menor_60, fila_maior_60, pilha_A, pilha_B);
				break;
			}
			case 3:{
				imprimir (pilha_A, pilha_B);
				break;
			}
			case 4:{
				encerrar (fila_menor_60, fila_maior_60, lista, pilha_A, pilha_B);
				break;
			}
			case 5:{
				imprimir_votaram_no_100 (pilha_A, pilha_B);
				break;
			}
			case 0:{
				return 0;
				break;
			}
			default:{
				cout<<"OPÇÃO INVÁLIDA\n\n";
				break;
			}
		}
		system("pause");
		system("cls");
	}while (opc != 0);
	
}

//front top pop advance insert erase clear

#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

struct Produtos {
	int peso;
	string nome;
};

void cadastrar(stack<Produtos>& p1, stack<Produtos>& p2){
	Produtos p;
	cin.ignore();
	cout << "Digite o nome" << endl;
	getline(cin, p.nome);
	cout << "Digite o peso" << endl;
	cin >> p.peso;
	
	if(p.peso >= 50){
		p1.push(p);
	}else{
		p2.push(p);
	}	
}

void esvaziarP1(stack<Produtos>& p1){
	Produtos topo;
	topo = p1.top();
	cout << "O produto a ser retirado é " << topo.nome;
	p1.pop();	
}
void esvaziarP2(stack<Produtos>& p2){
	Produtos topo;
	if (!p2.empty()){
		topo = p2.top();
		cout << "O produto a ser retirado é " << topo.nome;
		p2.pop();
	}else{
		cout << "a pilha esta vazia" << endl;
	}	
}

int main(){
	
	stack<Produtos> p1, p2;
	Produtos p, topo;
	int opcao;
	
	do{
		cout << "1 - cadastrar" << endl;
		cout << "2 - retirar " << endl;
		cout << "0 - sair" << endl;
		cin >> opcao;
		
		switch(opcao){
			case 1:{
				cadastrar(p1,p2);
				break;
			}
			case 2:{
				if (!p1.empty()){
					esvaziarP1(p1);
				} else{
					esvaziarP2(p2);
				}
				break;
			}
			default:{
				break;
			}
		}
		
		
	}while(opcao!=0);
	
	
	
}


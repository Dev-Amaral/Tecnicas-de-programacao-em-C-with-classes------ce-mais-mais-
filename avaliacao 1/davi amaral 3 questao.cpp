#include <iostream>
#include <locale.h>
#include <cstdlib>
#include<string.h>

using namespace std;

struct Usuario
{
    string login;
    string senha;
    string senha2;
};

struct Dados
{
    string nome;
    Usuario usuario;
    int idade;
};


int main()
{
    setlocale(LC_ALL,"portuguese");
    Dados d;
    cout<<"\t\t\tCADASTRO DE USÚARIO\n\n";
    cout<<"Insira seu nome: ";
    getline(cin,d.nome);
    cout<<"\nInsira sua idade: ";
    cin>>d.idade;
    cout<<"\nInsira seu login de usuário: ";
    fflush(stdin);
    getline(cin, d.usuario.login);
    do
    {
        cout<<"\nInsira sua senha: ";
        fflush(stdin);
        getline(cin, d.usuario.senha);
        cout<<"\nInsira novamente sua senha: ";
        fflush(stdin);
        getline(cin, d.usuario.senha2);
        if(d.usuario.senha!=d.usuario.senha2)
        {
            cout<<"\nAs senhas são diferentes!\nInsira novamente a senha\n";
        }

    }
    while(d.usuario.senha!=d.usuario.senha2);
    int x;
    string senha_oculta;
    x = d.usuario.senha.size();
    for(int i=0; i<x; i++)
    {
        senha_oculta+='*';
    }

    system("cls");
    cout<<"\t\tCADASTRO CONCLUÍDO!\nInformações do cadastro\n\n\n";
    cout<<"Nome: "<<d.nome<<"\nIdade: "<<d.idade<<"\nLogin de usuário: "<<d.usuario.login<<"\nSenha cadastrada: "<<senha_oculta<<endl;

    return 0;
}

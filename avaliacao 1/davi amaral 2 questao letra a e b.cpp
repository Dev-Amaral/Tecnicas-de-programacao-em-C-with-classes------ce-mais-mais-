#include <iostream>
#include <locale.h>
#include <cstdlib>



using namespace std;

void maior (int elementos[10])
{
    int maior =-9999999;

    for (int i=0; i<10; i++)
    {

        if(elementos[i]>=maior)
        {
            maior = elementos[i];
        }

    }
    cout<<"A maior quantidade de alunos reprovados foi: "<<maior<<endl;
    return;

}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int Matriculados[10],aprovados[10], reprovados[10];

    for(int i=0; i<10; i++)
    {

        cout<<i+1<<"º professor\n Seja bem vindo!\nInsira a quantidade de alunos matriculados na sua disciplina: ";
        cin>>Matriculados[i];

        cout<<"Insira a quantidade de alunos aprovados na sua disciplina: ";
        cin>>aprovados[i];

        reprovados[i]=Matriculados[i]-aprovados[i];
        system("cls");


    }
    for(int i=0; i<10; i++)
    {
        cout<<"Quantidade de reprovados na disciplina do "<<i+1<<"º Professor: "<<reprovados[i]<<endl;

    }
    maior(reprovados);
    return 0;
}

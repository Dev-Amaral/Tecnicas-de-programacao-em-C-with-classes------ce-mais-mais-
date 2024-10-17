#include<iostream>
#include<locale.h>
using namespace std;

void imprimir(int x[5]){
    cout<<"\nOrdem direta: ";
    for(int i=0;i<5;i++){
    cout<<x[i]<<"    ";
    }
    return;
}


void inverter(int y[5]){
    cout<<"\nOrdem inversa: ";
    for(int i=4;i>=0;i--){
    cout<<y[i]<<"    ";
    }
    return;
}

int main(){
    setlocale(LC_ALL,"");
    int vetor[5];
 cout<<"Insira 5 valores inteiros para cada elemento do vetor\n\n";
    for (int i=0;i<5;i++){
        cout<<"Digite o "<<i+1<<" º elemento \n";
        cin>>vetor[i];
    }
    imprimir (vetor);
    inverter (vetor);
}

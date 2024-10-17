#include<iostream>
#include<locale.h>
using namespace std;


float media(float n[3] , char tp){ 
float m;
if(tp=='A'){
    m=(n[0]+n[1]+n[2])/3;
} else if(tp=='P'){
    m=(n[0]*3+n[1]*7+n[2]*10)/20;
} else {
    m=-1;
} 
return m;
}

int main(){
setlocale(LC_ALL,"");
    float notas[3];
    char tipodemedia;
    for (int i=0;i<3;i++){
        cout<<"Digite a "<<i+1<<" ª nota\n";
        cin>>notas[i];
    }
cout<<"Qual o tipo de media? P para ponderada e A para aritmética\n";
cin>>tipodemedia;
cout<<"Média do aluno:\n"<<media(notas,tipodemedia);

}

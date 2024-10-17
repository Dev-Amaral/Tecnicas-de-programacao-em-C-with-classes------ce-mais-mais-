#include<iostream>

using namespace std;

int x;

void merge(int vetor[], int inicio, int meio, int fim) 
{
    int i = inicio; // i percorre do inicio ate o meio do vetor
    int j = meio + 1; // do meio + 1 até o fim
    int k = 0;  // apenas o indice do vetor auxiliar
    int vetor_ordenado[x]; // tem o mesmo tamanho do vetor desordenado x

    while (i <= meio && j <= fim) { // enquanto os elementos das duas metades do vetor ainda nao estiverem sido ordenados
        if (vetor[i] < vetor[j]) { // se o elemento da  primeira parte (esquerda) for maior que o da segunda parte (direita)
            vetor_ordenado[k] = vetor[i]; // ponha no vetor auxiliar
            i++;
        } else {
            vetor_ordenado[k] = vetor[j];
            j++;
        }
        k++; // incrementa o parametro para avançar de indice no vetor auxiliar
    }
	/* O PRIMEIRO WHILE RODA ENQUANTO AS DUAS METADES AINDA ESTIVEREM SENDO ORDENADAS
	ACONTECE QUE SE UMA DAS METADDES JÁ FOR ORDENADA AINDA FALATA A OUTRA E O WHILE VAI PARAR POIS É UMA CONDIÇÃO E (AND -- &&)
	LOGO TEMOS QUE IMPPLEMENTAR MAIS DOIS WHILES, CASO UMA PARTE DO VETOR (PILHA) ESTIVER SOBRANDO PARA PREENCHER O VETOR ORDENADO
	OU SEJA, ESSES DOIS WHILES SÓ SÃO PARA IMPRIMIR O RESTO DOS ELEMENTOS DOS VETORES
	*/
    while (i <= meio) { 
        vetor_ordenado[k] = vetor[i]; 
        i++;
        k++;
    }

    while (j <= fim) {
        vetor_ordenado[k] = vetor[j]; 
        j++;
        k++;
    }

    for (i = inicio, k = 0; i <= fim; i++, k++) {
        vetor[i] = vetor_ordenado[k];
    }
}

void merge_sort(int vetor[], int inicio, int fim) 
{
    if (inicio < fim) {
        int meio = (inicio + fim) / 2; 
        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim); 
    }
}

void imprimir(int vetor[])
{
    cout << "{";
    for (int i = 0; i < x; i++) {
        cout << vetor[i];
        if (i < x - 1) { // evitar imprimir a virgula no ultimo elemento do vetor
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

int main() 
{
    cout << "Tamanho do vetor: ";
    cin >> x;
    int vetor[x], inicio = 0, fim = x - 1; // fim = x - 1 porque se o vetor tem x posiçoes o ultimo elemento (fim) é x -1 , se é 8 o ultimo elemento tem indice 7 por exemplo

    for (int i = 0; i < x; i++)  // ler o vetor
    {
        cout << "vetor[" << i << "] = : ";
        cin >> vetor[i];
    }
    cout<<endl;
    imprimir(vetor); // vetor antes de ordenar
    merge_sort(vetor, inicio, fim); // inicio =  0, fim  = x -1 
    cout<<endl;
	imprimir(vetor); // vetor ordenado
	system("pause");
    return 0;
}

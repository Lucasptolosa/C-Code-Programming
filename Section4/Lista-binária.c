#include <stdio.h>

int buscaBinaria(int v[], int n, int chave, int *passos){
	int ini = 0;
	int fim = n - 1;
	*passos = 0;
	
	while (ini <= fim){
		(*passos)++;
		
		int meio = (ini + fim) / 2;
		
		if(v[meio] == chave){
			return meio;
		}
		else if (chave < v[meio]){
			fim = meio - 1; // Vai metade para 
		}
		else{
			ini = meio + 1; // vai para metade da direita
		}
	}
	return -1;
	
}

int main(){
	int vetor[9];
	int passos;
	int chave;
	
	printf("Digite 9 numeros INTEIROS e em ORDEM CRESCENTE. \n");
	for (int i = 0; i < 9; i++){
		printf("Valor %d: \n", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nDigite o número que deseja encontrar: ");
	scanf("%d", &chave);
	
	int pos = buscaBinaria(vetor, 9, chave, &passos);
	
	if (pos != -1){
		printf("\nNumero encontrado na posicao %d (indice do vetor)\n ", pos);
	} else {
		printf("\n Numero NAO encontrado \n");
	}
	printf("Numero de passos de busca binaria: %d\n", passos);
	
	return 0;
}
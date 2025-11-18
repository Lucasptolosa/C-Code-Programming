#include <stdio.h>

int construirVetor(int vetor[], int n, int v, int *passos){
	
	// Zera o contador
	*passos = 0;
	printf("Digite 9 numeros diferentes inteiros: \n");
	for (int i = 0; i < 9; i++){
		printf("Digite seu %do vetor: \n", i+1);
		scanf("%d", &v);
		vetor[i] = v;
		(*passos)++; // Conta atribuição 
	}
	printf("Digite o número que deseja encontrar: \n");
	scanf("%d", &n);
	for (int i = 0; i < 9; i++){
		(*passos)++;
		if (vetor[i] == n){
			return i; // Posição encontrada
		}
	}
	return -1; // posição não encontrada
}


int main(){
	int vetor[9];
	int passos = 0;
	
	int pos = construirVetor(vetor, 9, 0, &passos);
	
	if (pos != -1){
		printf("Número encontrado na posição %d\n", pos);
	} else{
		printf("Número não encontrado. \n");
	}
	
	printf("Número de passos encontrados: %d\n", passos);
	
	return 0;
}
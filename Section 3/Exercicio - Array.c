// Exercício 1 - Array.
// Função que recebe um vetor de TAM 5 e inverte seus valores para v.
// Depois printa os valores inversos


#include <stdio.h>
#define TAM 5 // tam é uma CONSTANTE de valor 5.

int main(){
	int vetor[TAM], v[5] = {4,9,10,8,6};
	int inverso[TAM];
	printf("Vetor v: ");
	for (int i = 0; i < TAM; i++){
		vetor[i] = v[i];
		printf("%d ", vetor[i]); 
	}
	
	printf("\nVetor inverso de v: ");
	for (int i = 0; i < TAM; i++){
		inverso[i] = v[TAM - 1  - i];
		printf("%d " , inverso[i]); 
	}
}
	
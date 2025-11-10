// Atribuição manual

#include <stdio.h>
#include <stdlib.h>
#define linha 2
#define coluna 2

int main(){
	int i, j;
	
	int matrizA[linha][coluna]; // Declaração simples - você vai preencher os valores depois.
	int matrizB[linha][coluna] = {{6,3},{1,4}}; // Você já sabe os valores que vão ser colocados.
	
	matrizA[0][0] = 6;
	matrizA[0][1] = 3;
	matrizA[1][0] = 1;
	matrizA[1][1] = 4;
	
	printf("\n Matriz A \n");
	for (i=0; i < linha; i++){
		for(j=0; j < coluna; j++){
			printf("%2d ", matrizA[i][j]);
		}
		printf("\n"); // A cada coluna preenchida ele pula para próxima linha.
	}
	
	printf("\n Matriz B \n");
	
	for (i=0; i < linha; i++){
		for(j=0; j < coluna; j++){
			printf("%2d ", matrizB[i][j]);
		}
		printf("\n"); // A cada coluna preenchida ele pula para próxima linha.
	}
	
	return 0;
}
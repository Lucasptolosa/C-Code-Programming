// Exercício 2 - Array
// Função recebe dois vetores inteiros - imprimi na tela quais valores são iguais

#include <stdio.h>
#define TAM 10

int main(){
	int A[TAM];
	int B[TAM];
	int qntd;
	int iguais[TAM];
	printf("Digite a quantidade de números que queira digitar (máx 10): \n");
	scanf("%d", &qntd);
	
	printf("Primeiro vetor! \n");
	for (int i = 0; i < qntd; i++){
		printf("Digite o %do numero: \n", i + 1);
		scanf("%d", &A[i]);
	}
	printf("Segundo vetor! \n");
	for (int i = 0; i < qntd; i++){
		printf("Digite o %do numero: \n", i + 1);
		scanf("%d", &B[i]);
	}
	
	printf("A = B: \n");
	for (int i = 0; i < qntd; i++){
		if (A[i] == B[i]){
			iguais[i] = A[i];
		}	
	}
	printf("{");
	for (int i = 0; i < qntd; i++){
		printf("%d,", iguais[i]);
	}
	printf("}");

}


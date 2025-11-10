// Matriz.
// tipo variavel[linhas][colunas]

// Imrpimi 50 combinações de jogos para a mega sena.

#include <stdio.h>
#include <stdlib.h>
#define linha 50
#define coluna 6 // Tamanho máximo da matriz 50x6

int main(){
	int matriz[linha][coluna], i, j; 
	
	for (i=0; i<linha; i++){ // linhas
		for (j = 0; j < coluna; j++){ // colunas
			matriz[i][j]= rand () %60 + 1; // Números aleatórios de 1 a 60
		}
	}
	
	for (i=0; i<linha; i++){
		printf("Combinação %2d: ", i+1);
		for (j=0; j<coluna; j++){
			printf("%2d ", matriz[i][j]); // %[largura][tipo] -- normalmente o valor base é 1(%d), se eu colocar 2 (%2d) isto fara com que o item ocupe
			// 2 espaços na tela durante a impressão
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
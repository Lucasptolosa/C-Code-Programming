#include <stdio.h>
#include <stdlib.h>
#define linha 3
#define coluna 3

int main(){
	int matriz[linha][coluna], i, j;
	
	for (i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Digite o elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]); // Entrada de dados via teclado da matriz
		}
	}
	
	for (i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%2d ",matriz[i][j]);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
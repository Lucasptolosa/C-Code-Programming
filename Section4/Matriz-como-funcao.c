// Matriz como argumento de função

#include <stdio.h>
#include <stdlib.h>
#define linha 10
#define coluna 10

void chamaMatriz(int matriz[][coluna]){ // O número de colunas precisa ser informados, o de linhas pode ficar vazio.
	int i, j; // É útil ter uma função que imprima a matriz - assim - não ah nescessidade de escreve-la novamente toda hora.
	
	for (i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int matriz[linha][coluna];
	int i, j;
	
	for (i=0; i<linha; i++){
		for (j=0; j < coluna; j++){
			matriz[i][j]=rand()%60 + 1;
		}
	}
	
	chamaMatriz(matriz);
	
	system("PAUSE");
	return 0;
		
}
// Funções e vetores.

#include <stdio.h>
#include <stdlib.h>

void ordemCrescente(int vetor[], int n){
	int i, j, temp;
	
	for (i=0; i < n-1; i++){
		for (j=i; j<n; j++){
			if (vetor[i] > vetor[j]){
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
}

int main(){
	int vetor[10] = {6,4,1,9,8,0,5,7,3,2}; // Declaração do vetor
	int i;
	
	ordemCrescente(vetor,sizeof(vetor)/sizeof(vetor[0])); // o primeiro sizeof pega o tamanho em bytes total do vetor - o segunda pega um único índice
	// Dividindo um pelo outro, encontramos o número de elementos.
	
	for (i=0; i < 10; i++){
		printf("%d ",vetor[i]);
	}
	
	system("pause");
	return 0;
}
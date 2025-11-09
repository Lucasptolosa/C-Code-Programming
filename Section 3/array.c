//array 

#include <stdio.h>

int main(){
	float notas[3], media, soma=0; // Literalmente listas, tem índices e tudo mais.
	
	for (int i = 0; i<3; i ++){ //Começa no i, vai até ser igual a 3, vai somando indice APÓS conta.
		printf("Digite sua nota %d: ", i+1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}
	
	media = soma/3;
	printf("A media eh: %.2f", media);
	
	return 0;
	
}

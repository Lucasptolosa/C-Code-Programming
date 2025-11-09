#include <stdio.h>
#include <stdlib.h>
#define TAM 50 // Define o tamanho da string 'TAM' como 50

int main(){
	float notas[TAM], media=0;
	int i=0,j;
	
	do{
		printf("Digite a nota do aluno %d: \n", i+1);
		scanf("%f", &notas[i]); // O programa pede uma nota e armazena em notas[i]
		}while (notas[i++] >= 0); // Se a nota for maior ou igual a 0 ele continua lendo, se for negativa, ele para. O [i++] faz com que o índice avance
		i--; // Aqui ele remove o ítem do término, ou seja, o negativo final.
		
		for (j=0; j<i; j++){
			media += notas[j];
		}
		media/=i;
		printf("\nMédia das notas %.2f", media);
		
		system("pause");
		return 0;
}
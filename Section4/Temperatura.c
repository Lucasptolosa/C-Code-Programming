// Maior temperatura do dia.

#include <stdio.h>

int buscaLinearMax(float v[], int n){ // Vetor, tamanho percorrido
	int indiceMaior = 0;
	
	for (int i = 1; i < n; i++){
		if (v[i] > v[indiceMaior]){ // v[1] "22.1" > v[indiceMaior] "23.6"? --> SIM, então ele altera o valor de maior índice
			indiceMaior = i; // Índice puro.
		}
	}
	return indiceMaior;
}

int main(){
	float temperaturas[] = {22.1, 23.6, 23.1, 25.0, 25.8, 24.2, 21.8, 19.6};
	int tamanho = 8;
	
	
	
	int indice = buscaLinearMax(temperaturas, tamanho);
	float maior = temperaturas[indice];
	
	printf("A maior temperatura: %.1f que se encontra no indice: %d", maior, indice );
	
	return 0;
}

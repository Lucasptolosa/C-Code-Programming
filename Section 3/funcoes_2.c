// Calculando o fatorial de um número

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
	int fat=1;
	for(int i =1; i<= n; i++){
		fat = fat * i;
	}
	return fat;
}

int main(){
	int fat, n;
	
	do{
		printf("Digite um número positivo(0 para sair): ");
		scanf("%d", &n);
		
		if (n > 0){
			fat = fatorial(n); // Chama da função definida.
			printf("Fatorial de %d eh: %d\n", n, fat);	
		}
	}while(n > 0);
	
	printf("\n\nFIM\n\n");
	system("pause"); // Isso aqui da a mensagem de apertar qualquer tecla para sair.
	return 0;
}
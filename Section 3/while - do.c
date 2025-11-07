//while - do

// O DO antes do WHILE é essencial para fazer com que o código rode pelomenos uma vez
// por exemplo:
/*
int n = 0;
while (n > 0) {
	printf("n = %d\n", n);
	n--;
} */
// Aqui o código nunca executa por que a condição já e falsa desde o início.

#include <stdio.h>

int main(){
	int n = 0;
	do{
		printf("n = %d\n", n);
		n--;
	} while(n > 0);
	
	do {
		printf("Digite um número positivo: ");
		scanf("%d", &n);	
	} while (n <= 0);
	
	printf("Número válido: %d\n", n);
}

#include <stdio.h>

int main(void){
	int n;
	
	do{
		printf("Digite o valor de N - Número inteiro e positivo\n");
		scanf("%d", &n);
	} while (n <= 0);
	
	int i, soma = 0;
	for(i = 0; i <= n; ++i){
		soma += N;
	}
	
	printf("A soma de 0 a %d é %d",n, soma);
	return 0;
}
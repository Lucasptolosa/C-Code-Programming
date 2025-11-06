#include <stdio.h>

int main(){
	int soma = 0;
	
	printf("Valor de N: ");
	int n;
	scanf("%d", &n);
	
	int i;
	for (i = 1; i <= n; i ++){ // (inicialização, condição, atualização) -- (1, até ser igual a n, passo equivalente a i)
		soma += i;
	}
	
	printf("Soma dos %d primeiros inteiros: %d\n", n, soma);
	printf("Valor final de i: %d", i);
}
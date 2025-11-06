// do - while

#include <stdio.h>

int main(){
	int valor;
	
	do
	{
		printf("Entre um valor positívo: ");
		scanf("%d", &valor);	
	}
	while (valor <= 0);

	printf("%d é um número positívo!\n", valor);
}
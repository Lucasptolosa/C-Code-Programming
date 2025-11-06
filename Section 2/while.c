# include <stdio.h>

int main()
{
	int valor = 1;
	
	while (valor > 0) // Fica nesta repetição ATÉ ser inserido um número negativo. 
	{
		printf("Entre um número negativo!");
		scanf("%d",&valor);
	}
	
	printf("%d é um número negativo!\n", valor);
	return 0;
}
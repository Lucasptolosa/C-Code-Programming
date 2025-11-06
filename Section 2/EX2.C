#include <stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Digite o tamnho do primeiro lado: ");
	scanf("%d", &a);
	
	printf("Digite o tamnho do segundo lado: ");
	scanf("%d", &b);
	
	printf("Digite o tamnho do terceiro lado: ");
	scanf("%d", &c);
	
	if ((a < b + c)&&(b < a + c)&&(c < a + b))
	{
		printf("O triangulo existe!");
	}
	else
	{
		printf("O triangulo NÃO existe.");
	}
}
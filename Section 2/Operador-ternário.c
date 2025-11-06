// Operador Ternário

#include <stdio.h>

int main(){
	printf("Nota de 0.0 a 10.0: ");
	float nota;
	scanf("%f", &nota);
	
	nota >= 6 ? printf("Aprovado!\n") : printf("Reprovado!\n"); // (Expressão BOOLEANA)(Expressão executada CASO VERDADEIRO)(Expressão executada CASO FALSO)
	
	char resultado;
	
	resultado = nota > 5 ? 'x' : 'y';
	
	printf("Resultado: %c\n", resultado);
}
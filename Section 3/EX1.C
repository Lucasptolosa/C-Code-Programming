// Exercício 1.
/*IMPORTANTE
em formato CHAR -- "" aspas duplas sinalizam um 'cons char' ou seja, imudável
agora, aspas únicas '' sinalizam apenas um tipo de string. */


#include <stdio.h>

char obterConceito(float nota){
	char conceito;

	if (nota < 2.9){
		conceito = 'E';
	}
	else if (nota < 4.9){
		conceito = 'D';
	}
	else if (nota < 6.9){
		conceito = 'C';
	}
	else if (nota < 8.9){
		conceito = 'B';
	}
	else if (nota <= 10){
		conceito = 'A';
	}
	else{
		printf("?");
	}
	
	return conceito;
}

int main(){
	float nota;
	printf("Digite sua nota");
	scanf("%f", &nota);
	
	char conceito = obterConceito(nota);
	printf("Conceito: %c\n", conceito);
}
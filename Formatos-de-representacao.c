//Formatos de representação

#include <stdio.h>

int main(){
	char letra = 'A';
	int idade = 18;
	float altura = 1.75;
	char nome[20] = "Lucas";
	
	printf("Letra: %c\n", &letra);
	printf("Idade: %d\n", &idade);
	printf("Altura: %.2f\n", &altura);// Aqui o .2 vem antes do f por que ele arredonda pra 2 casas decimais (1.75, ao invés de 1.75000)
	printf("Nome: %s\n", &nome);
	
	return 0; 
}
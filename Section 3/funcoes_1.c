//Funções
/* Uma função é um bloco de código que executa uma 
tarefa especifica e pode ser reutilizado várias vezes no programa */

#include <stdio.h>

int soma(int a, int b) { // Função criada e definida como 'soma'.
	return a + b;
}

int main(){
	int resultado = soma(5, 3);
	printf("Resultado %d\n", resultado);
	return 0;
}
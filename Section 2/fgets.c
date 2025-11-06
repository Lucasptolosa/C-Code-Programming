// fgets

// Ela funciona como uma forma de scan, mas, onde é possível indentificar respostar compostas, ex: lucas tolosa.
// Normalmente só seria aceita a parte 'lucas' e 'tolosa' seria descartado


#include <stdio.h>

int main(){
	char nome[20];
	printf("Coloque seu nome:\n ");
	fgets(nome, 20, stdin); // (Variável, quantidade máx de caracteres, stdin)
	// Vale acrescentar que a função apenas serve para a função de 'char'
	printf("Seu nome é %s", nome);
}
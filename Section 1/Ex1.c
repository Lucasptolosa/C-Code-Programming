// Básico do básico. -- Novamente.

#include <stdio.h>

int main(){
	int a; // É nescessário declarar as variáveis antes de utiliza-las
	int b;
	int div;
	int resto;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &a); // Scanf é o INPUT da linguagem C, a qual escaneia os dados e atribui valor. 
	// Já o %d atribui que o formato o qual sera lido sera do tipo INTEIRO. // logo após, atribuo à variável a qual me refiro 
	printf("Digite o segundo número: ");
	scanf("%d",&b);
	
	div = a / b;
	resto = a % b;
	
	printf("Divisão = %d e resto = %d\n", div, resto); // Aqui, %d representa o formato em que sera representado a variável, e logo após, adicionamos a variáveis após a virgula em ordem de aparências.
	
	return 0;
}
// freeCodeCamp Calculator.

#include <stdio.h>

int main(){
	
	double num1; // O 'double' em C funciona como um flaot, mas, tende a consumir mais espaço, visto que devolve os números com até 15 casas decimais.
	double num2;
	char op;
	
	printf("Enter a number: ");
	scanf("%lf", &num1); // 'lf' é o formato especificado para variáveis do tipo double.
	printf("Enter operator: ");
	scanf(" %c", &op);
	printf("Enter a number: ");
	scanf("%lf", &num2);

	if (op == '+'){
		printf("%lf", num1 + num2);
	} else if (op ==  '-'){
		printf("%lf", num1 - num2);
	} else if (op == '/'){
		printf("%lf", num1 / num2);
	} else if (op == '*'){
		printf("%lf", num1 * num2);
	} else{
		printf("Error");
	}
	
	return 0;
}
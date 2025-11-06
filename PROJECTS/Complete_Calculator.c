// Calculadora

#include <stdio.h>
#include <math.h>

int main(){
	float num1, num2, result;
	int choice, schoice;
	printf("Welcome!\n");
	printf("Pleas, chose your type of calculation by the numbers:\n");
	printf("1 - sum\n 2 - subtraction\n 3 - division\n 4 - multiplication\n 5 - Special options\n");
	scanf("%d", &choice);
	

	if (choice == 1){
		printf("first number\n");
		scanf("%f", &num1);
		
		printf("second number\n");
		scanf("%f", &num2);
		
		result = num1 + num2;
		printf("Your result is %.2f\n", result);
	}
	else if (choice == 2){
		printf("first number\n");
		scanf("%f", &num1);

		printf("second number\n");
		scanf("%f", &num2);
		
		result = num1 - num2;
		printf("Your result is %.2f\n", result);
	}
	else if (choice == 3){
		printf("first number\n");
		scanf("%f", &num1);
		
		printf("second number\n");
		scanf("%f", &num2);
		
		result = num1 / num2;
		printf("Your result is %.2f\n", result);
	}
	else if (choice == 4){
		printf("first number\n");
		scanf("%f", &num1);
		
		printf("second number\n");
		scanf("%f", &num2);
		
		result = num1 * num2;
		printf("Your result is %.2f\n", result);
	}
	else if (choice == 5){
		printf("Specail options:\n 1 - square root\n 2 - raising number\n");
		scanf("%d", &schoice);
		
		if (schoice == 1)
		{
			printf("Type your number: \n");
			scanf("%f", &num1);
			
			printf("%f\n", sqrt(num1));
		}
		else if (schoice == 2){
			printf("Type your number: \n");
			scanf("%f", &num1);
			printf("Type your elevation \n");
			scanf("%f", &num2);
			printf("%f\n", pow(num1,num2));
		}
		else{
			printf("Unknown option.\n");
		}
	}
	else{
		printf("Unknown option. \n");
	}
	}

#include <stdio.h>

int main(){
	printf("Números de 1 a 5: ");
	int n;
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: // Caso (variável/número)
			printf("Um!\n");
			break;
		case 2:
			printf("Dois!\n");
			break;
		case 3:
			printf("Três!\n");
			break;
		case 4:
			printf("Quatro!\n");
			break;
		case 5:
			printf("Cinco!\n");
			break;
		default: // Except
			printf("Número precisa ser de 1 a 5..\n");		
	}
	
	return 0;
	
}
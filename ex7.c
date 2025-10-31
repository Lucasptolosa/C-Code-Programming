#include <stdio.h>
#include <stdbool.h>

int main(){
	bool rep;
	int p;
	printf("Qual a sua porcentagem de presença? ");
	scanf("%d", &p);
	rep = p < 75;
	printf("Reprovado por faltas: %d\n", rep);
	return 0;
}
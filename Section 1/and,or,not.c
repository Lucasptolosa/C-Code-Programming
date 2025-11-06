#include <stdio.h>
#include <stdbool.h>

int main(){
	bool a, b, c;
	
	a = true;
	b = false;
	c = a && b;
	printf("%d and %d = %d\n", a, b, c);
	
	c = a||b;
	printf("%d or  %d = %d\n", a, b, c);
	
	c = !a;
	printf("not %d = %d\n", a, c);
	
	return 0;
}
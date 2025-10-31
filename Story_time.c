// História

#include <stdio.h>

int main(){
	
	char name[50];
	int age;
	float height;
	char letter;
	
	printf("Characters name: ");
	scanf("%s", &name);
	
	printf("His age: ");
	scanf("%d", &age);
	
	printf("Its height: ");
	scanf("%f", &height);
			
	letter = name[0];
	
	printf("There was once a person which name started with the letter %c\n", letter);
	printf("Its name, of course, was %s\n", name);
	printf("It was %d years old and mesured %.2f meters!\n", age, height);
}
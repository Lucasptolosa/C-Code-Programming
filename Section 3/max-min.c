// Máx -- Mín

#include <stdio.h>

int max1(int num1, int num2){
	int result;
	if (num1 > num2){
		result = num1;
	}else{
		result = num2;
	}
}

int max2(int num1, int num2, int num3){
	int result;
	
	if (num1 >= num2 && num1 >= num3){
		result = num1;
	} else if (num2 >= num1 && num2 >= num3){
		result = num3;
	} else{
		result = num3;
	}
}


int main(){
	 printf("%d\n", max1(4,10));
	 
	 printf("%d\n", max2(1,2,2));
	 
	 return 0;
}

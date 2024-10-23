#include <stdio.h>
#include <conio.h>

void main(){
	int num1, num2;
	char opt;
	
	printf("Enter the Number 1: ");
	scanf("%d", &num1);
	
	printf("Enter the Number 2: ");
	scanf("%d", &num2);	
	
	printf("Enter the Operator: ");
	opt = getch();
	
	if (opt == '+'){
		printf("The Sum Is %d", num1 + num2);
	}else if (opt == '-'){
		printf("The Subtraction Is %d", num1 - num2);
	}else if (opt == '*'){
		printf("The Product Is %d", num1 * num2);
	}else if (opt == '/'){
		printf("The Division Is %d", num1 / num2);
	}else {
		printf("Invalid");
	}
		
}
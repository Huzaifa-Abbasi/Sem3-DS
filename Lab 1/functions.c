#include <stdio.h>
#include <conio.h>

int  add(int num1, int num2){
	return num1 + num2;
}

int sub(int num1, int num2){
	return num1 - num2;
}

int mult(int num1, int num2){
	return num1 * num2;
}

int div(int num1, int num2){
	return num1 / num2;
}



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
		printf("The Sum Is %d",add(num1, num2));
	}else if (opt == '-'){
		printf("The Subtraction Is %d",sub(num1, num2));
	}else if (opt == '*'){
		printf("The Product Is %d", mult(num1, num2));
	}else if (opt == '/'){
		printf("The Division Is %d", div(num1, num2));
	}else {
		printf("Invalid");
	}
		
}
#include <stdio.h>

int main() {
	int num1, num2;
	char operator;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d", &num1, &operator, &num2);
	
	if(operator == '+'){
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}else if (operator == '-'){
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	}else if (operator == '*') {
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }else if (operator =='/'){
    	if  (num2 != 0) { 
    	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	} else {
		printf("error: cannot divide by zero.");
	}
} else {
	printf("error: unsupported operator.\n");
}


return 0;
}
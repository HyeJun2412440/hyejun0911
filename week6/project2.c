#include <stdio.h>

int main() {
	int number;
	
	printf("Enter an integer:");
	scanf("%i",&number);
	
	if(number < 0){
		printf("%i\n",-number);
	} else{
		printf("%i\n", number);
	}
	
	return 0;
}
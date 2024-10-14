#include <stdio.h>

int main() {
	int num =0;
	char c;
	
	printf("Input a string:");
	
	while((c= getchar()) !='\n'){
	
	 if (c >= '0' && c <= '9') {
	 	num++;
	 }
}

printf("The number of digits is %d\n", num);
	
	return 0;
}
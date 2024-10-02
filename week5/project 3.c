#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	
	printf("Input the second:");
	scanf("%i", &a);
	
	printf("The time is %i:%i", a/60, a%60);
	
	return 0;
}
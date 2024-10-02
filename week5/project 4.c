#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int year;
	int cond1;
	
	printf("Input the year:");
	scanf("%i", &year);
	
	cond1 = (year % 4== 0 && year % 100 != 0) || (year% 400 ==0);
	
	printf("Is the year %i the leap year? %i", year, cond1);
	return 0;
}
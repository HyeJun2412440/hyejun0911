#include <stdio.h>

int main(void)
{
	char a,b;
	
	printf("enter a character : ");
	scanf("%c",&a);
	
	b=a+1;
	printf("the next character of %c (%i) is %c (%i)",a,a,b,b);
	
	return 0;
}
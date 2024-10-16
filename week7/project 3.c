#include <stdio.h>

void square(int a)
{
	a=a*a;
}

int main()
{
	int a=2;
	square(a);
	printf("a=%i/n",a);
}

int squar( int a)
{
	return (a*a);
}

int man()
{
	int a=2;
	a= squar(a);
	printf("a=%i\n",a);
}
#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	int*p;
	int sum=0;
	float average;
	
	for(i=0; i<5; i++)
	{
		printf("Input value-grade[%i]=",i);
		scanf("%d", &grade[i]);
	}
	
	p=grade;
	for (i=0; i<5; i++){
		sum += *(p+i);
	}
	
	average=sum / 5.0;
	
	for (i=0; i<5; i++){
		printf("grade[%d]=%d\n", i, *(p+i));
	}
	printf("average = %.2f\n", average);

	return 0;
}
#include <stdio.h>

int sumTwo(int a, int b) {
	return a+b;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if(x>y){
		return x;
	}else {
		return y;
	}
}

int main(){
	int a,b;
	
	printf("Enter two integers: ");
	scanf("%d %d", &a,&b);
	
	int sum= sumTwo(a,b);
	int sqr= square(a);
	int max= get_max(a,b);
	
	printf("Result-sum: %d, Square: %d, max: %d\n", sum,sqr,max);
	
	return 0;
}
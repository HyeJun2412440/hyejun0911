#include <stdio.h>
#define SIZE 5

int main(){
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,7,10};
	int flag_same = 1;
	
	for (int i=0; i< SIZE; i++) {
		if(a[i] != b[i]){
			printf("Index with different values: %d\n",i);
			flag_same=0;
		}
	}
	if(flag_same)
	   printf("The arrays have the same values.\n");
	else
	   printf("The arrays have different values.\n");
	   
	   return 0;
}
#include <stdio.h>
#define STUDENTNUM 4

struct student{
	   int ID;
	   int score;
	   
};
int main (void){
	   
	   struct student s[STUDENTNUM];
	   int i, maxIndex =0;
	   float average =0;
	   
	   for (i=0; i< STUDENTNUM; i++){
	   	   printf("Input the ID: ");
	   	   scanf("%d", &s[i].ID);
	   	   printf("Input the score: ");
	   	   scanf("%d", &s[i].score);
	   }
	   
	   for (i=0; i< STUDENTNUM; i++) {
	   	    average += s[i].score;
	   	    if (s[i].score > s[maxIndex].score){
	   	    	maxIndex = i;
			}
	   }

       average/= STUDENTNUM;

       printf("The average of the score: %.6f\n", average);
       printf("The highest score - ID: %d, score: %d\n", s[maxIndex].ID, s[maxIndex].score);

       return 0;
}
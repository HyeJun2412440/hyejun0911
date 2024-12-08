#include <stdio.h>
#include <stdlib.h>

struct point{
	    int x;
	    int y;
};

int getArea(struct point p1, struct point p2){
	int width = abs(p2.x-p1.x);
	int height = abs(p2.y-p1.y);
	return width *height;
}

int main(){
	    struct point p1, p2;
	    int area;
		
		printf("Input the coordinate p1 (x y): ");
		if (scanf("%d %d", &p1.x, &p1.y)!=2) {
			printf ("Invalid input. Please enter numeric values.\n");
			return 1;
		}
		
		printf("Input the coordinate p2 (x y): ");
		if (scanf("%d %d", &p2.x, &p2.y)!=2) {
			printf ("Invalid input. Please enter numeric values.\n");
			return 1;
		}
		
		if(p1.x == p2.x || p1.y==p2.y){
			printf("Error: Points do not form a valid rectangle.\n");
			return 1;
		}
	
	    area= getArea(p1, p2);
	    printf("Area: %d\n", area);
	    
	    return 0;
}

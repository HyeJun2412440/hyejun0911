#include <stdio.h>
#include <math.h> //required for sqrt()

struct point{
	int     x;
	int     y;
};

int main (void){
	struct point p1,p2;
	int xdiff,ydiff;
	double dist;
	
	printf("input p1 coordinate (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdiff = p2.x - p1.x;
	ydiff = p2.y - p1.y;
	
	dist = sqrt((xdiff * xdiff) + (ydiff * ydiff));
	
	printf("Distance: %.6lf\n", dist);
	
	return 0;
	
}
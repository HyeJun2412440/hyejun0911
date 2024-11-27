/*#include <stdio.h>

struct student {
	int id;
	char name[50];
	float grade;
};

int main(void) {
	struct student s1 = {2412440, "hyejun", 4.3};
	
	printf("ID: %d\n", s1.id);
	printf("Name: %s\n", s1.name);
	printf("Grade: %.2f\n", s1.grade);
	
	return 0;
	
}*/

#include <stdio.h>
#include <string.h>

struct student {
	int id;
	char name[50];
	float grade;
};

int main(void) {
	struct student s1 = {2412440, "hyejun", 4.3};
	
	s1.id=2412440;
	strcpy(s1.name, "hyejun");
	s1.grade=4.3;
	
	printf("ID: %d\n", s1.id);
	printf("Name: %s\n", s1.name);
	printf("Grade: %.2f\n", s1.grade);
	
	return 0;
	
}
#include <stdio.h>

int main(void) {
	FILE *file;
	char word1[50], word2[50], word3[50];
	
	printf("Input a word: ");
	scanf("%s", word1);
	printf("Input a word: ");
	scanf("%s", word2);
	printf("Input a word: ");
	scanf("%s", word3);
	
	file= fopen("sample.txt", "w");
	if (file==NULL) {
		printf("Error opening file!\n");
		return 1;
	}
	
	fprintf(file, "%s\n%s\n%s\n", word1, word2, word3);
	fclose(file);
	
	return 0;
}
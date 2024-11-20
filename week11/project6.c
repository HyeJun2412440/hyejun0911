#include <stdio.h>

/*void main(void){
	FILE *fp = NULL;
	char c;
	
	fp=fopen("sample.txt", "r");
	if (fp==NULL)
	   printf("can not open the file\n");
	   
	while((c=fgetc(fp)) != EOF){
		putchar(c);
	}
	
	fclose(fp);
}*/

#include <string.h>
void main(void){
	FILE *fp = NULL;
	char line[200];
	char *word;
	
	fp=fopen("sample.txt", "r");
	if (fp==NULL)
	   printf("can not open the file\n");
	   
	while(fgets(line, sizeof(line),fp) !=NULL) {
		word = strtok(line, "\t\n");
		
		while (word != NULL){
			printf("%s\n", word);
			word= strtok(NULL, "\t\n");
		}

	}
	
	fclose(fp);
}
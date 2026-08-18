//file handling using fgets and fputs
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("string.txt","w");
	fputs("hello good morning",fp);
	fclose(fp);
	
	FILE *f;
	f=fopen("string.txt","r");
//	char text[200];
//
    char text[200];
    while(fgets(text,200,f) != NULL)
	{
		printf("%s",text);
		
	}
//	printf("%s",fgets(text,200,f));
	fclose(f);
}

//filehandling using fputc anf fgetc
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	fputc('a',fp);
	fclose(fp);
	
	
	FILE *f;
	char c;
	f=fopen("file.txt","r");
	while( (c = fgetc(fp))!= EOF)
	{
		printf("%c",c);
		
	}
	fclose(f);
	return 0;
}

//fseek
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("seek.txt","w+");
	fputs("my name is mayur",fp);
	fseek(fp,7,SEEK_SET);
	fputs("practical",fp);
	fclose(fp);
	
}

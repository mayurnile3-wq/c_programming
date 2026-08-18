//ftell
#include<stdio.h>
int main()
{
	FILE *fp;
	int length;
	fp=fopen("file.txt","r");
	fseek(fp,0,SEEK_END);
	length = ftell(fp);
	fclose(fp);
	printf("size of file %d bytes",length);
	return 0;
}

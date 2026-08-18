//file handling write mode
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("open.txt","w");
	fprintf(fp,"hello mayuri \n");
	fclose(fp);
	return 0;
}

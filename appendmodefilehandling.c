//file handlin append mode
#include<stdio.h>
int main()
{
	FILE *f;
	f=fopen("details.txt","a");
	fprintf(f, " I AM 21 YEARS OLD");
	fclose(f);
	return 0;
	
}

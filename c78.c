//file handling write mode user input
#include<stdio.h>
int main()
{
	char name[10],city[10];
	printf("\nenter your name:-");
	scanf("%s",name);
	printf("\nenter your city:-");
	scanf("%s",
	city);
	FILE *f;
	f=fopen("details.txt","w");
	fprintf(f,"MY NAME IS %s I AM FROM %s",name,city);
	fclose(f);
	return 0;
	
}

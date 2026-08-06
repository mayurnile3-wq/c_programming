#include<stdio.h>
int main()
{
	int r,c;
	for(r=0;r<4;r++)
	{
		for(c=0;c<4;c++)
		{
			if(r==0||r==3||c==2||c==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n"); v
	}
	return 0;
}

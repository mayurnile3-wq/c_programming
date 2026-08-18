#include<stdio.h>
int main()
{
	int r,c;
	int num=1;
	for(r=5;r>0;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",num);
			
		}
		num++;
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
 int main()
 {
 	int r,c;
    for( r=0;r<4;r++)
    {
        for( c=0;c<4;c++)
        {
            if(c%2==0)
            {
                printf("4");
            }
            else
            {
                printf("5");
            }

        }
        printf("\n");
    }
   return 0;
 }


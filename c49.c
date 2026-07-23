//static variable
#include<stdio.h>
void display()
{
	int a=10;
	static b=20;
	 
	a=a+1;
	b=b+1;
	
	printf("\n%d",a);
	printf("\n%d",b);
}
 int main()
 {
 	display();
 	display();
 	display();
 	return 0; 

 }


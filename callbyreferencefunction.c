//call by reference

#include<stdio.h>
void show(int*num)
{
	printf("\nbefore adding=%d",*num);
	(*num)+=10;
	printf("\n after adding=%d",*num);
	
}
  int main()
  {
  	int a=10;
  	printf("\n before function call %d",a);
  	show(&a);
  	printf("\n after function call %d",a);
  	return 0;
  }
  

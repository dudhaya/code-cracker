#include <stdio.h>

int main(void) {
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num>0)
	{
            num=num%100;
	    printf(num);
	}
	else if(num<0)
	{ 
	  printf("0");
	}
	else
	{
	    printf("neither positive or negative");
	}
	
	return 0;
}

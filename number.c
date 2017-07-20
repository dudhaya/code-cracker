#include <stdio.h>

int main(void) {
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num>0)
	{
	    printf("positive number");
	}
	else if(num<0)
	{ 
	  printf("negative number");
	}
	else
	{
	    printf("neither positive or negative");
	}
	
	return 0;
}

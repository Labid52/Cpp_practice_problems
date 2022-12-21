#include <stdio.h>
int sum(int *x,int *y)
{	 
	return (*x)+(*y);
}
int main()
{	 int x,y,b;
	x=5;
	y=10;
	b=sum(&x,&y);
	printf("%d",b);

	
}

#include<stdio.h>
int fact(int n);

int main()
{
	int num;
	printf("ENter a number :");
	scanf("%d",&num);
	int fac=fact(num);
	printf("%d is the factorial",fac);
	
}
int fact(int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	return 1;
}

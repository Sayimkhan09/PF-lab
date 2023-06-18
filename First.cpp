#include<stdio.h>
int n_time(int n);
int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	int res=n_time(num);
}
int n_time(int n)
{
	printf(" %d ",n);
	if(n>=1)
	{
		return n+n_time(n-1);
	}
	return 1;
}
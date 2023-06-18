#include<stdio.h>
int n_time(int n);
int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	int res=n_time(num);
	printf("%d",res);
}
int n_time(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	return n+n_time(n-1);
}

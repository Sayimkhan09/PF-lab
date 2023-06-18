#include<stdio.h> 
int sum(int x);
int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	int sm=sum(num);
	printf("%d",sm);
	
}
int sum(int x)
{
	if(x==0)
	{
		return x;
	}
	else
	{
		return (x%10)+sum(x/10);
	}
}
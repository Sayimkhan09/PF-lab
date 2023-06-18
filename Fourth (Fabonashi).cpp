#include<stdio.h>
int fab(int x);
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		printf("%d ",fab(i));
	}
	
}
int fab(int x)
{
	if(x==0 || x==1)
	return x;
	else
	return fab(x-1)+fab(x-2);
	
}
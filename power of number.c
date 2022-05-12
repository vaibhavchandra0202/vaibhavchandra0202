#include<stdio.h>
int main()
{
	int m,power=1,i,x;
	printf("Enter m and n");
	scanf("%d%d",&m,&x);
	for(i=1;i<=m;i++)
	{
		power=power*x;
	}
	printf("power of a number%d",power);
}

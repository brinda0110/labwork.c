#include<stdio.h>
int main()
{
	int i,n ;
	n=15;
	printf("enter value of i:");
	scanf("%d",&i);
	while(n>=i)
	{
		printf("%d ",n);
	    n-=2    ;
	}
}
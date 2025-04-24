#include <stdio.h>
int main()
{
	int i,n;
	i=2;
	printf("enter value of n:");
	scanf("%d",&n);
	do{
		printf("%d ",i);
		i+=2;
	}
	while(i<=n);
}
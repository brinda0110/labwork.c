#include<stdio.h>
int main()
{
	int s,e;
	printf("enter s:");
	scanf("%d",&s);
	printf("enter e:");
	scanf("%d",&e);
	while(s<=e)
	{
		printf("%d",s);
		s+=4;
	}
}
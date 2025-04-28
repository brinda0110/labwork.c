#include<stdio.h>
int main()
{
	int a,b;
	for(a=5;a>=1;a--)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}
 /*output: 5
         44
         333
         2222
         11111*/

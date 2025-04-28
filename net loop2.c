#include<stdio.h>
int main()
{
	int a,b;
	for(a=5;a>=1;a--)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
 /* output: 5
            45
            345
            2345
            12345*/

#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=a;b>=1;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
   /* output:      1
                   21
                   321
                   43218 */
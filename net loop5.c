#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}
    /* output:      11111
                    2222
                    333
                    44
                    5*/
#include<stdio.h>
int main()
{
	char a,b;
	for(a='A';a<='E';a++)
	{
		for(b=a;b>='A';b--)
		{
			printf("%c",b);
		}
		printf("\n");
	}
}
/* output:A
          BA
          CBA
          DCBA
          EDCBA*/

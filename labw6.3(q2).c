#include<stdio.h>
int main()
{
	int n , multi=1;
    for(n=1;n<=5;n++)
{
	printf("%d \n",n);
	multi=multi*n;
}
printf("the factorial is: %d", multi);
}
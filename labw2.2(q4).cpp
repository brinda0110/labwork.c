#include<stdio.h>
int main()
{
	int n;
	float p,r,simpleintrest;
	printf("p:");
	scanf("%f",&p);
	printf("r:");
	scanf("%f",&r);
	printf("n:");
	scanf("%d",&n);
	simpleintrest = p*r*n/100;
	printf("simple intrest:%f",simpleintrest);
	scanf("%f",&simpleintrest);
	}
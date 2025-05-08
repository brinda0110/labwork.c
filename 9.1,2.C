#include<stdio.h>
int main()
{
	int i;
	char arr[]={'H','E','L','L','O' , 'W','O','R','L','D'};
	for(i=0;i<11;i++)
	{
		printf("%c",arr[i]);
	}
	 printf("\n");
	 
	for(i=0;i<11;i++)
	{
	   arr[i]=arr[i]+32;
	   printf("%c",arr[i]);
	   	
	}
	}
	/*OUTPUT:
HELLOWORLD

helloworld*/
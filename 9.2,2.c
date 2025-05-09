#include<stdio.h>
#include<string.h>
int main()
{ 
	char arr1[99]="admin@gmail.com";
	char arr2[99] ="12345"     ;
{
	printf("%s",arr1);
	printf("%s",arr2);
	printf("\n");}

	char arr3[99];
{
	printf("Enter your Email:");
	gets(arr3);}

	char arr4[99];
   {
	printf("Enter your password:");
	gets(arr4);
  }
         int strcmp(arr1,arr3);	
         printf("%d",strcmp(arr1,arr3));
         int strcmp(arr2,arr4);	
         printf("%d",strcmp(arr2,arr4));
         printf("\n");
         
 	if(strcmp(arr1,arr3)==0 && strcmp(arr2,arr4)==0)	
	{
		printf("login successfull");
	}
	else 
	{
		printf("login failed,invalid credentials");
	}
}
/*output:
Enter your Email:admin@gmail.com
Enter your password:12345
00
login successfull

Enter your Email:xyz@gmail.com
Enter your password:12345
-10
login failed,invalid credentials */
	
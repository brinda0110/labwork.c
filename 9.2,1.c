#include<stdio.h>
#include<string.h>
int main()
{ 
	char arr[99];
	int a=0,b=0,c=0;
	printf("create your password:");
	gets(arr);
	
	puts(arr);
	if(strlen(arr) <= 6)
	{
		printf("your password must contain atleast 6 character.");
	}
	else
	   {
	 	for(int i=0;arr[i] != '\0';i++)
	      {
		 	if(arr[i]>='A' && arr[i]<='Z') {
	         a=1;
           }
           if((arr[i]>='!' && arr[i]<='/') ||(arr[i]>=':' && arr[i]<='@')){
           b=1;
		   }
		   if(arr[i]>='0' && arr[i]<='9' ){
		   	c=1;
		   }
	}
	
	if(a==1&&b==1&&c==1){
		printf("your password is strong");
		}
		else
		{
			printf("your password is not strong");
		}
   
}
}

/*output:
create your password:Admin@123
Admin@123
your password is strong


create your password:hello#123
hello#123
your password is not strong   */

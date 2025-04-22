# include<stdio.h>
int main()
{
	int marks ;
	printf("marks of student:");
	scanf("%d",&marks);
	
	if(marks>=75)
	{
		printf("grade A");
	}
	else if (60<=marks)
	{
		printf("grade B");
	}
	else if(45<=marks)
	{
		printf("grade C");
	}
	else 
	{
		printf("fail");
	}
	
}

/* output: marks of student: 45
           grade c

output: marks of student:34
         fail
         */
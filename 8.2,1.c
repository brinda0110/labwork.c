#include <stdio.h>
int main()
{
	int array[3][3];
	float average, sum=0;
	for(int i=0;i<3;i++)
	{
	   for(int j=0;j<3;j++)
	    {printf(" arr[%d][%d]: ",i,j);
		scanf("%d",&array[i][j]);
		sum+=array[i][j];
		}
	
		}	
		average=sum/9;
		printf("average :%f",average);
		
	

}
/* output:


		
	
	

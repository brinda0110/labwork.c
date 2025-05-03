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
 arr[0][0]: 2
 arr[0][1]: 4
 arr[0][2]: 1
 arr[1][0]: 3
 arr[1][1]: 5
 arr[1][2]: 4
 arr[2][0]: 8
 arr[2][1]: 2
 arr[2][2]: 6
average :3.888889 */

		
	
	

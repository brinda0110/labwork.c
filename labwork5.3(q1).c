#include <stdio.h>
int main()

{   int choice ;
     
    printf("press 1 english\n");
    printf("press 2 hindi\n");
    printf("press 3 gujrati\n");
    printf("press 4 chinese \n");
    printf("enter your choice:\n");
    scanf("%d",&choice);
    
    switch(choice)
    { 
    case 1:
    	printf("english");
    	break;
    case 2:
    	printf("hindi");
    	break;
    case 3:
    	printf("gujrati");
    	break;
    case 4:
    	printf("chinese");
    	break;
    default :
    	printf("wrong language!!!");
    	break;
    		
	}
}













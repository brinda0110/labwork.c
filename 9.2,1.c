#include<stdio.h>
#include<string.h>
int main()
{ 
	char arr[5];
	printf("create your password:");
	gets(arr);
	if(strlen(arr)>=6)
	 {
	 	for(int i=0;i<strlen(arr);i++)
	 	if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z') ||(arr[i]>=33 && arr[i]<=64))
	 {
		 	printf(" strong");
		 }
		 else
		 {
		 	printf(" not strong");
		 }
	 }
  
   
}
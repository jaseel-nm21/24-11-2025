#include<stdio.h>
int main()
{
	int num=0,n=0,sum=0,avg=0,i=0;
	printf("enter the value of n");
	scanf("%d",&n);
	do
	{
		printf("enter a number");
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}while(i<n);
	
	
	avg=sum/n;
	printf("avg of n numbers is : %d",avg);
	
	return 0;
}
		
		

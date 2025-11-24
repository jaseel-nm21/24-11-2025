#include<stdio.h>
int main()
{
	int ary[50];
	int i=0;
	int num=0;
	int sum=0;
	
	printf("enter number between 1-50:");
	scanf("%d",&num);
	if (num<50)
		{
		printf("enter %d number to store in array :",num);
		
		for (i=0;i<num;i++){
			scanf("%d",&ary[i]);
			}
			
		for (i=0;i<num;i++){
			sum=sum+ary[i];
			}
	
		printf("sum of array elements is=%d",sum);
		}
	else{
		printf("size of array overflow");
		}
	
	return 0;
}
	

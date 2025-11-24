#include<stdio.h>
int display(int arr[],int size)
{
	for(int j=0;j<size;j++)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}
int sort(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{	
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return 0;
}
int merge(int arr1[],int arr2[],int new[],int s1,int s2)
{
	int i;
	for(i=0;i<s1;i++)
	{
		new[i]=arr1[i];
	}
	for(int j=0;j<s2;j++)
	{
		new[i]=arr2[j];
		i++;
	}
	return 0;
}														
int main()
{
	int arr1[50];
	int arr2[50];
	int size1=0;
	int size2=0;
	int i;
	int newsize=0;
	int new[50];
	
	printf("enter the size of 1st array :");
	scanf("%d",&size1);
	
	printf("enter the value of 1st array :");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the size of 2nd array :");
	scanf("%d",&size2);
	printf("enter the value of 2st array :");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	printf("the 1st array is :");
	display(arr1,size1);
	
	printf("\nthe 2nd array is :");
	display(arr2,size2);
	
	printf("\nsorted array 1 is :");
	sort(arr1,size1);
	display(arr1,size1);
	
	printf("\nsorted array 2 is :");
	sort(arr2,size2);
	display(arr2,size2);
	
	merge(arr1,arr2,new,size1,size2);
	printf("\nnew merged array is :");
	newsize=size1+size2;
	display(new,newsize);
	
	printf("\nnew sorted array is :");
	sort(new,newsize);
	display(new,newsize);
	
	return 0;
}

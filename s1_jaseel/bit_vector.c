#include<stdio.h>
#include<stdlib.h>

char u_set[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};
char set_one[26];
char set_two[26];
char result[26];
	

void initializeset()
{
	for(int i=0;i<=26;i++)
	{
		set_one[i]=0;
		set_two[i]=0;
		result[i]=0;
	}
}

void bitvector(char ary[26])
{
	for(int i=0;i<=26;i++)
	{
		for(int j=0;j<=26;j++)
		{
			if(u_set[i]==ary[j])
			{
				ary[j]=1;
			}
		}
	}
	
}

void setunion(int bit1[26],int bit2[26])
{
	for(int i ;i<26;i++)
	{
		result[i]=bit1[i] | bit2[26];
	}
		
}

void setintersection(int bit1[26],int bit2[26])
{
	for(int i;i<26;i++)
	{
		result[i]=bit1[i]&bit2[26];
	}
}
void setcomplement(int bit[26])
{
	for(int i=0;i<26;i++)
	{
		if(bit[i] == 0)
		{
			result[i] =1;
		}
		else
		{
			result[i] =0;
		}
	}
}

void setdifference(int bit1[26],int bit2[26])
{
	setcomplement(bit2);
	setintersection(bit1,result);
}

void display(char ary[26])
{
	for(int i=0;i<26;i++)
	{
		printf("%c",ary[26]);
	}
	
}
int main()
{
	int size1;
	int size2;
	
	initializeset();
	
	printf("Enter the no.of elements in set one :\n");
	scanf("%d",&size1);
	printf("Enter the elemnts :\n");
	for(int i=0;i<size1;i++)
	{
		scanf("%c",&set_one[i]);
	}
	
	printf("Enter the no.of elements in set two :\n");
	scanf("%d",&size2);
	printf("Enter the elemnts :\n");
	for(int j=0;j<size2;j++)
	{
		scanf("%c",&set_two[j]);
	}
	
	display(set_one);
	
	
	
	
	
	
	return 0;
}
	

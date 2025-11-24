#include<stdio.h>

int add(int x,int y){
	int sum=0;
	sum=x+y;
	return sum;
	}
int main(){
	int a=0,b=0;
	printf("enter two number :\n");
	scanf("%d %d",&a,&b);
	
	int result=0;
	result=add(a,b);
	printf("sum of two numbers is = %d",result);
	
	return 0;
}

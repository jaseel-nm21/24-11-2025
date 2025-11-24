#include<stdio.h>
int main () {

	int num=0,largest=0,i=0;
	while(i<5){
		i++;
		printf("enter a number \n");
		scanf("%d",&num);
	if(largest<=num){
		largest=num;
	}
	}	
	printf("this is the largest number =%d",largest);
return 0;
}


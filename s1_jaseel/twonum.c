#include <stdio.h>
int main(){

int num1,num2;
printf("enter two number :\n");
scanf("%d %d", &num1,&num2);

if(num1>num2){
printf("number %d is largest",num1);
}
else{
printf("number %d is largest",num2);
}
return 0;
}

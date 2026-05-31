#include<stdio.h>
int main(){
    int num1,num2,temp;

    printf("enter 2 numbers");
    scanf("%d%d",&num1,&num2);

    
    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;

    }
    printf("%d is gcd",num1);
    return 0;

}
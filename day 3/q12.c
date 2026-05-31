#include<stdio.h>
int main(){
    int a,b,num1,num2,temp,lcm;

    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);


    a=num1;
    b=num2;


    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;

    }
    lcm=a*b/num1;


    printf("%d is lcm",lcm);

    
    return 0;
    
}
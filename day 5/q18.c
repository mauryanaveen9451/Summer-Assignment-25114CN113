#include<stdio.h>
int main(){
    int num,temp,num2,sum=0,fact;

    printf("enter number");
    scanf("%d",&num);


    if(num>0){
    temp=num;

    while(num>0){
        num2=num%10;
        num=num/10;
        fact=1;

        
        while(num2>0){
            fact*=num2;
            num2--;

        }
        sum+=fact;

    }
    if(temp==sum){
        printf("it is strong number");

    }
    else{
        printf("it is not strong number");
    }}

}
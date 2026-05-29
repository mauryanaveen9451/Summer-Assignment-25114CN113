#include<stdio.h>
int main (){
    int num,rev=0;


    printf("enter a number");
    scanf("%d",&num);

    
    while(num!=0){
        rev=num%10+rev*10;
        num=num/10;

    }
    printf("reverse of number is %d",rev);
    return 0;

}
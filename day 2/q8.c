#include<stdio.h>
int main (){
    int a,num,rev=0;


    printf("enter a number");
    scanf("%d",&num);
    a=num;

    
    while(num!=0){
        rev=num%10+rev*10;
        num=num/10;

    }
    if (a==rev){
        printf("number is palindrome");

    }
    else{
        printf(" number is not palindrome");

    }
    return 0;

}
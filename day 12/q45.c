#include<stdio.h>
int palindrome();
int main(){
    palindrome();
    return 0;
}
int palindrome(){
    int num,rev=0,temp;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rev=rev*10+num%10;
        num/=10;

    }
    if(temp==rev){
        printf("number is palindrome");

    }
    else{
        printf("number is not palindrome");

    }
}
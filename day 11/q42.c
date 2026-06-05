#include<stdio.h>
int max(int a,int b);
int main(){

    int num1,num2;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);

    printf("max number is  %d",max(num1,num2));

    return 0;


}
int max(int a,int b){
    if (a>b){
    return a;
    }
    else{
        return b;
    }
}
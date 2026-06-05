#include<stdio.h>
int add(int a,int b);
int main(){

    int num1,num2;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);

    printf("sum of both numbers are  %d",add(num1,num2));

    return 0;


}
int add(int a,int b){
    return a+b;
}
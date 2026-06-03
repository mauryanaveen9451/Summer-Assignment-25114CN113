#include<stdio.h>
int sum(int num);
int main(){

    
    int num;
    printf("enter number");
    scanf("%d",&num);
    printf("sum of digits is %d",sum(num));
    return 0;

}
int sum( int num){
    if (num>0){
        return sum(num/10)+num%10;

    }
    else{
        return 0;
    }
}
#include<stdio.h>
int main(){
    int num,sum=0;

    printf("enter number of terms");
    scanf("%d",&num);

    while(num>0){
        sum=num+sum;
        num-=1;
    }

    
    printf("sum of first N natural number is %d",sum);
    return 0;

}
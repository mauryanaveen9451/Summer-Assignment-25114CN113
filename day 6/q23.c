#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter number");
    scanf("%d",&num);
    while(num){
        count+=(num&1);
        num>>=1;

    }
    printf(" number of set bits are%d",count);
    return 0;

}
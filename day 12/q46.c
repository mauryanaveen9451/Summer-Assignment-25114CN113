#include<stdio.h>
#include<math.h>
int arm();
int main(){
    arm();
    return 0;
}
int arm(){
    int num,count=0,num2=0,temp,po,sum=0;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        count++;
        temp/=10;
    }
    po=count;
    num2=num;
    while(count>0){
        sum=sum+round(pow(num2%10,po));
        num2/=10;
        count--;

    }
    if(sum==num){
        printf("number is armstrong");

    }
    else{
        printf("number is not armstrong");

    }
}
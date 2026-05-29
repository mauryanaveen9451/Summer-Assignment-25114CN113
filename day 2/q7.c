#include<stdio.h>
int main(){
    int num,pro=1;

    printf("enter a number");
    scanf("%d",&num);
    if ( num==0){
        pro=0;

    }
    else{

    while(num!=0){
        pro=pro*(num%10);
        num=num/10;
    }

    }
    printf("product of digits are %d",pro);
    return 0;

}
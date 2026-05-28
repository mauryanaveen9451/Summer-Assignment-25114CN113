#include<stdio.h>
int main(){
    int num,sum=1;
    
    printf("enter num to find factorial");
    scanf("%d",&num);

    while(num>0){
        sum*=num;
        num--;

    }
    printf("%d",sum);
    return 0;


}
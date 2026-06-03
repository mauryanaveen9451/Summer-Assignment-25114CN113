#include<stdio.h>
int main(){
    int num,pow,sum=1;


    printf("enter number");
    scanf("%d",&num);
    printf("enter power");
    scanf("%d",&pow);

    
    while(pow>0){
        sum=sum*num;
        pow--;
        
    }
    printf("%d",sum);
    return 0;
}
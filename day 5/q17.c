#include<stdio.h>
int main(){


    int num,i,sum=0,temp;
    
    printf("enter number");
    scanf("%d",&num);
    if(num>0){

    temp=num;

    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;

        }

    }
    if(temp==sum){
        printf("number is perfect");

    }
    else{
        printf("number is not perfect");

    }
}
    return 0;

}
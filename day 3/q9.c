#include<stdio.h>
int main(){
    int num,i,p=0;


    printf("enter a number");
    scanf("%d",&num);

    
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            p+=1;
        }
    }
    if(num==1){
        printf("number is not prime");

    }
    else if(p==0){
        printf("number is prime");

    }  
    else{
        printf("number is not prime");

    } 
    return 0;


}
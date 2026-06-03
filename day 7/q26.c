#include<stdio.h>
int fib(int num);
int main(){
    int i,num;

    
    printf("enter number");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("%d ",fib(i));// fibonacci series

    }
   return 0; 
}
int fib(int num){
    if (num>1){
        return fib(num-1)+fib(num-2);

    }
    
    else{
        return num;

    }
}

#include<stdio.h>
int pri(int a);
int main(){

    int num;
    printf("enter number");
    scanf("%d",&num);

    pri(num);

    return 0;

}
int pri(int a){
    int b=0,i;
    for (i=1;i<=a/2;i++){
        if(a%i==0){
            b++;
        }

    }
    if(b==1){
        printf("number is prime");
    }
    else{
        printf("number is not prime");
    }
}
#include<stdio.h>
int fact(int a);
int main(){

    int num;
    printf("enter number");
    scanf("%d",&num);

    printf("factorial is %d",fact(num));

    return 0;


}
int fact(int a){
    int fac=1;
    
    while(a>0){
    fac=fac*a;
    a--;
    }
    return fac;
}
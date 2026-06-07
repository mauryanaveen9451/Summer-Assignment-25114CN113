#include<stdio.h>
int fib();
int main(){
    fib();
    return 0;
}
int fib(){
    int n,a=0,b=1,i,temp;


    printf("enter number of terms in fibonacci series");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);

    
    for(i=2;i<n;i++){
        temp=b;
        b=a+b;
        a=temp;
        printf("%d \n",b);

}
}
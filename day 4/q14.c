#include<stdio.h>
int main(){
    int n,a=0,b=1,i,temp;
    printf("enter nth terms in fibonacci series");
    scanf("%d",&n);

    
    if (n==1){
        printf(" 0 is nth term");
        

    }
    else{
    for(i=2;i<n;i++){
        temp=b;
        b=a+b;
        a=temp;


    }

    printf("%d is nth term \n",b);
}
    return 0;


}
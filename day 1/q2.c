#include<stdio.h>
int main(){
    int num,i;

    printf("enter number");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("%dX%d=%d",num,i,num*i);
        printf("\n");

    }
    return 0;

}
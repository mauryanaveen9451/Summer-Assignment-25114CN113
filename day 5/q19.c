#include<stdio.h>
int main(){
    int num,i;


    printf("enter number");
    scanf("%d",&num);


    if(num>0){
        printf("factors are \n");
        
    for(i=1;i<=num;i++){
        
        if(num%i==0){
            printf("%d \n",i);
        }
    }
}
return 0;
}
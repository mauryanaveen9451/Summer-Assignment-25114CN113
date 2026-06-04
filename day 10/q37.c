#include<stdio.h>
int main(){
    int i,j,k,num=9;

    for(i=1;i<=num;i=i+2){
        for(k=1;k<=(num-i)/2;k++){
           printf(" ");
        }

        
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
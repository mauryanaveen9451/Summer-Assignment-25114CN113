#include<stdio.h>
int main(){
    int i,j,k,num=9;

    for(i=1;i<=num;i=i+2){
        for(k=1;k<=(num-i)/2;k++){
           printf(" ");
        }

        
        for(j=1;j<=i/2+1;j++){
            printf("%d",j);
        }
        for(j=j-2;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
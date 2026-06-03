#include<stdio.h>
void main(){
    int dec,bin[32],r,i;


    printf("enter number in decimal");
    scanf("%d",&dec);

    
    for(i=0;dec>0;i++){
        r=dec%2;
        dec=dec/2;
        bin[i]=r;

    }
    for(i=i-1;i>=0;i--){
        printf("%d",bin[i]);

    }
    printf("is its binary form");

}
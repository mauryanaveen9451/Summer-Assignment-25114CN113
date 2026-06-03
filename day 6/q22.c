#include<stdio.h>
#include<math.h>
int main(){
    int i=0,bin,dec=0,num;

    printf("enter number in binary form");
    scanf("%d",&bin);

    
    while(bin>0){
        dec=dec+bin%2*(pow(2,i));
        i++;
        bin/=10;

    
    }
    printf("%d",dec);//converted to decimal form


}
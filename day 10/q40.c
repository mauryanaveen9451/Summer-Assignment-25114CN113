#include<stdio.h>
int main(){
    int i,j,k,num=9;
    char ch='A';

    for(i=1;i<=num;i=i+2){
        ch='A';
        for(k=1;k<=(num-i)/2;k++){
           printf(" ");
            
        }

        
        for(j=1;j<=i/2+1;j++){
            printf("%c",ch);
            ch++;

        }
        ch-=2;;
        for(j=j-2;j>0;j--){
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}

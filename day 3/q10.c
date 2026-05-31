#include<stdio.h>
int main(){
    int num,i,j,p;


    printf("enter a range of prime number");
    scanf("%d",&num);


    for(i=2;i<=num;i++){
        p=0;

        for(j=2;j<=i/2;j++){
            
        if(i%j==0){
            p+=1;
            break;
        }
    }
    

    
    if(p==0){
        printf("%d",i);
        printf("\n");

    }  

    }
    return 0;

    } 


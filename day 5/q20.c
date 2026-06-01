#include<stdio.h>
int main(){
    int num,i,j,p=0,lar=0;


    printf("enter number");
    scanf("%d",&num);

    if(num>0){
    for(i=2;i<=num;i++){
        
        if(num%i==0){
            p=0;
            
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    p+=1;
                }

            }
            if(p==0){
                lar=i;
            }
        }
    }
}
printf("%d is largest prime factor",lar);
return 0;
}
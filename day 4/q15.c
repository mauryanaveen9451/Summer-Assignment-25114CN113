#include<stdio.h>
#include<math.h>
int main(){
    int num,i=0,n,num2=0,j,b;
    printf("enter number");
    scanf("%d",&num);
    n=num;


    while(num>0){
        num=num/10;
        i++;

    }
    j=i;
    num=n;


    while(i>0){
        i--;
        b=n%10;
        num2=num2+pow(b,j);
        n=n/10; 
    }

    
    if (num==num2){
    printf("%d is armstrong number",num);
    }
    else{
        printf("%d is not armstrong",num);
}
    return 0;

}
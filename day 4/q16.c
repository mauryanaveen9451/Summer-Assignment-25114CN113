#include<stdio.h>
#include<math.h>
int main(){
    int num,k,i=0,n,num2=0,temp,j,b;
    printf("enter range of number");
    scanf("%d",&k);
    for(num=1;num<=k;num++){
        n=num;
        temp=num;
        i=0;
        num2=0;
        while(n>0){
            n=n/10;
            i++;

        }
        j=i;
        while(temp>0){
            b=temp%10;
            num2=num2+round(pow(b,j));
            temp=temp/10; 
    }
    if (num==num2){
        printf("%d is armstrong number \n",num);
    }
}
    return 0;

}
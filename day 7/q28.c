#include<stdio.h>
int rev(int num);
int main(){
    int num;
    
    printf("enter number");
    scanf("%d",&num);
    printf("%d is its reverse",rev(num));
    return 0;

}
int sum=0;
int rev(int num){
    if (num==0){
        return sum;

    }
    else{
        sum=(sum*10)+(num%10);
        return rev(num/10);
    }
}
#include<stdio.h>
int fact(int num);

int main(){
    int num;

    
    printf("enter number");
    scanf("%d",&num);
    printf("%d is factorial",fact(num));
    return 0;

}
int fact(int num)
{
    if(num>0){
    return num*fact(num-1);
    }
    else{
        return 1;
    }


}
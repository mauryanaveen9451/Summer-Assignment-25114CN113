#include<stdio.h>
int main(){
    int arr[50],i,num,count=0,sum;//program to find single missing number

    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }
    sum=(num+2)*(num+1)/2;

    for(i=0;i<num;i++){
        count+=arr[i];
    }
    if(sum!=count){
        printf("missing number is %d ",sum-count);
    }
    else{
        printf("no number is missing");
    }



}   
#include<stdio.h>
int main(){
    int arr[50],i,num,temp,count=0;

    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }

    for(i=0;i<num;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<num){
        arr[count]=0;
        count++;
    }
    
    
    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
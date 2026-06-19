#include<stdio.h>
int main(){
    int arr[50],i,num,temp;

    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<num/2;i++){
        temp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-1-i]=temp;

    }
    printf("reversed array is");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
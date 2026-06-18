#include<stdio.h>
int main(){
    int arr[50],i,num,targ,count=0;
    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        

    }
    printf("enter element for search");
    scanf("%d",&targ);

    for(i=0;i<num;i++){
        if(arr[i]==targ){
        printf("element found at %d position \n",i+1);
        count=1;
        }
    
    
    }
    if(count==0){
        printf("element not found");
    }
    
    return 0;
} 
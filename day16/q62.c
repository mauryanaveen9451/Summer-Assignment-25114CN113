#include<stdio.h>
int main(){
    int arr[50],i,j,num,temp,count=0,max=0;

    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<num;i++){
        count=0;
        for(j=0;j<num;j++){
            if(arr[j]==arr[i]){
                count++;
            }

        }
        if(count>max){
            max=count;
            temp=arr[i];
        }
    
    }
    if(max>0){
        printf("element %d has maximum frequency of %d",temp,max);

    }
    else{
        printf("no element have max frequency");
    }

}    
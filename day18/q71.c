#include<stdio.h>
int main(){
    int i,j,num,temp,find,str=0,mid,end;

    printf("enter number of elements");
    scanf("%d",&num);

    int arr[num];

    printf("enter elements in ascending order");

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }  
    printf("enter element you want to find");
    scanf("%d",&find);
    end=num-1; 

    while(str<=end){
        mid=str+(end-str)/2;
        if(arr[mid]==find){
            temp=1;
            break;
        }
        else if(arr[mid]<find){
            str=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(temp==1){
        printf("element found at %d index",mid);

    }
    else{
        printf("element not found");
    }
    return 0;
}    
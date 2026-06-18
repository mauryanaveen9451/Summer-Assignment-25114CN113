#include<stdio.h>
int main(){
    int arr[50],i,larg1=0,larg2=0,num;


    printf("enter number of elements");
    scanf("%d",&num);

    printf("enter elements");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<num;i++){
        if(arr[i]>larg1){
            larg2=larg1;
            larg1=arr[i];
        }
        else if(arr[i]>larg2 && arr[i]<larg1){
            larg2=arr[i];
        }

    }    
        printf("2nd largest element is %d",larg2);
    
    
    return 0;
}
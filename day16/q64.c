#include<stdio.h>
int main(){
    int arr[50],i,j,num,temp2,temp=0;

    printf("enter number of elements");
    scanf("%d",&num);

    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(arr[i]==arr[j]){

                temp2=arr[num-1];
                arr[num-1]=arr[j];
                arr[j]=temp2;

                num--;
                j--; 
            }
        }
    }
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}    
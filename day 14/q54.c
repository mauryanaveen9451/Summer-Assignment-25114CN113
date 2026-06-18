#include<stdio.h>
int main(){
    int arr[50],temp[50],i,j,count=0,num;
    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        temp[i]=0;

    }
    for(i=0;i<num;i++){
        if(temp[i]==1){
        continue;
        }

        count=1;

        for(j=i+1;j<num;j++){
            if(arr[i]==arr[j]){
                count++;
                temp[j]=1;
            }
        }
    
    if(count>1){
        printf("element %d has frequency %d",arr[i],count);
        printf("\n");
    }
    }
    return 0;
}

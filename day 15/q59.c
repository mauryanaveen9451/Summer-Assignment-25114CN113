#include<stdio.h>
int main(){
    int arr[50],i,num,temp1,temp2,rr;//right rotation

    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter number of times to rotate right ");
    scanf("%d",&rr);

    while(rr>0){
        temp2=arr[0];
        for(i=1;i<num;i++){
            temp1=arr[i];
            arr[i]=temp2;
            temp2=temp1;
        }
        arr[0]=temp2;
        rr--;
    
    }
    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
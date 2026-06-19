#include<stdio.h>
int main(){
    int arr[50],i,num,temp1,temp2,rl;//left rotation

    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter number of times to rotate left ");
    scanf("%d",&rl);

    while(rl>0){
        temp2=arr[num-1];
        for(i=1;i<num;i++){
            temp1=arr[num-1-i];
            arr[num-i-1]=temp2;
            temp2=temp1;
        }
        arr[num-1]=temp2;
        rl--;
    
    }
    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
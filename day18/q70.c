#include<stdio.h>
int main(){
    int i,j,num,temp,id;

    printf("enter number of elements");
    scanf("%d",&num);

    int arr[num];

    printf("enter elements");

    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        id=i;

        for(j=i+1;j<num;j++){
            if(arr[j]<arr[id]){
                id=j;
            }
        }
        if(i!=id){
            temp=arr[id];
            arr[id]=arr[i];
            arr[i]=temp;
        }
    }
    for(i=0;i<num;i++){
        printf("%d",arr[i]);

    }       
    return 0;
}     


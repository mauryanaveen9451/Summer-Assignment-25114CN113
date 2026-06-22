#include<stdio.h>
int main(){
    int arr[50],i,j,num,num2,temp=0,a;

    printf("enter number of elements");
    scanf("%d",&num);
    

    printf("enter sum");
    scanf("%d",&num2);

    printf("enter elements");
    
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);

    }

    for(i=0;i<num;i++){
        a=num2-arr[i];
        for(j=0;j<num;j++){
            if(a==arr[j] && i!=j){
                printf("%d and %d are pair of given sum \n",arr[i],arr[j]);
                temp=1;
            }

        }
    }
    if(temp==0){
        printf("pair not found");
    }
    return 0;
}    
#include<stdio.h>
int main(){
    int i,j,num,sum=0;
    printf("enter number of rows of square matrix");
    scanf("%d",&num);
    int arr1[num][num];

printf("enter elements of array");

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i==j || i+j==num-1){
                sum+=arr1[i][j];
            }
        }
    }
    printf("sum of diagonal is %d ",sum);

    return 0;

}

#include<stdio.h>
int main(){
    int i,j,num,sum;
    printf("enter number of rows of square matrix");
    scanf("%d",&num);
    int arr1[num][num];

printf("enter elements of 1st array");

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&arr1[i][j]);
        }

    }

    for(i=0;i<num;i++){
        sum=0;
        for(j=0;j<num;j++){
            sum+=arr1[i][j];
        }
        printf("sum of %d row is %d \n",i+1,sum);
    }
    return 0;

}
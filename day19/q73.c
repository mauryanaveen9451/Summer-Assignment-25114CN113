#include<stdio.h>
int main(){
    int i,j,num;
    printf("enter number of rows of square matrix");
    scanf("%d",&num);
    int arr1[num][num],arr2[num][num],arr3[num][num];

printf("enter elements of 1st array");

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&arr1[i][j]);
        }

    }
    printf("enter elements of 2nd array");

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&arr2[i][j]);
        }

    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("%d ",arr3[i][j]);
        }  
        printf("\n");  
    }
    return 0;

}
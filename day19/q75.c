#include<stdio.h>
int main(){
    int i,j,num;
    printf("enter number of rows of square matrix");
    scanf("%d",&num);
    int arr1[num][num],arr2[num][num];

printf("enter elements of array");

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            arr2[j][i]=arr1[i][j];
        }
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            printf("%d ",arr2[i][j]);
        }  
        printf("\n");  
    }
    return 0;

}

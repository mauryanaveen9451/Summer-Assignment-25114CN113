#include<stdio.h>
int main(){
    int i,j,num,c=0;
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
            if(arr1[j][i]!=arr1[i][j]){
                printf("matrix is not symmetric");
                c=1;
                return 0;
            }
        }
    }
    if(c==0){
        printf("matrix is symmetric");
    } 
    return 0;

}

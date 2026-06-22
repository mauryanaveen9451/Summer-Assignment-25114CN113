#include<stdio.h>
int main(){
    int i,j,num,m,n,p,q,k;

    printf("enter number of rows and column of 1st matrix");
    scanf("%d %d",&m,&n);

    int arr1[m][n];
    printf("enter elements of 1st array");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }

    }
    printf("enter number of rows and column of 2nd matrix");
    scanf("%d %d",&p,&q);
    int arr2[p][q];


    printf("enter elements of 2nd array");

    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    if(n!=p){
        printf("multiplication is not possible");
        return 0;
    }
    int arr3[m][q];

    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            arr3[i][j]=0;
            for(k=0;k<n;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d ",arr3[i][j]);
        }  
        printf("\n");  
    }
    return 0;

}
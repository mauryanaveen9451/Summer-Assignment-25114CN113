#include<stdio.h>
int main() {
    int A[50],n,i,j,sum=0;
    printf("enter number of elements in array");
    scanf("%d",&n);
    printf("enter elements");

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);

    }
    for (j=0;j<n;j++){
        sum+=A[j];

    }
    printf("sum and avg of elements are %d \n %f",sum,(float)sum/n);
    return 0;

}
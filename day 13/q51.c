#include<stdio.h>
int main() {
    int A[50],n,i,j,max,min;
    printf("enter number of elements in array");
    scanf("%d",&n);
    printf("enter elements");

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);

    }max=A[0];
    min=A[0];
    for (j=1;j<n;j++){
        if(A[j]>max){
            max=A[j];

        }
        if(A[j]<min){
            min=A[j];
        }
    }
    printf("max and min are%d  %d",max,min);

    return 0;

}
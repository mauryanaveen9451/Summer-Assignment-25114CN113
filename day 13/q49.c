#include<stdio.h>
int main() {
    int A[50],n,i,j;
    printf("enter number of elements in array");
    scanf("%d",&n);
    printf("enter elements");

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);

    }
    printf("entered elements are");
    for (j=0;j<n;j++){
        printf("%d",A[j]);
        printf("\n");
    }
    return 0;

}
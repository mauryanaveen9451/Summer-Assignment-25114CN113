#include<stdio.h>
int main() {
    int A[50],n,i,j,even=0,odd=0;
    printf("enter number of elements in array");
    scanf("%d",&n);
    printf("enter elements");

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);

    }
    for (j=0;j<n;j++){

        if(A[j]%2==0)
        even++;

        else
        odd++;

    }
    printf("number of even and odd elements are %d  %d",even,odd);
    return 0;

}
#include<stdio.h>
void merg(int arr1[50],int arr2[50],int num1,int num2);
int main(){
    int arr1[50],arr2[50],num1,num2,i;
    printf("enter number of elements");
    scanf("%d",&num1);
    printf("enter elements");
    for(i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter number of elements in array2");
    scanf("%d",&num2);

    printf("enter elements");
    
    for(i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }
    merg(arr1,arr2,num1,num2);
    return 0;
}  
void merg(int arr1[50],int arr2[50],int num1,int num2){
    int num3,i;
    num3=num1+num2;
    int arr3[num3];

    for(i=0;i<num1;i++){
        arr3[i]=arr1[i];
    }
    for(i=0;i<num2;i++){
        arr3[i+num1]=arr2[i];
    }
    for(i=0;i<num3;i++){
        printf("%d ",arr3[i]);
    }

}  
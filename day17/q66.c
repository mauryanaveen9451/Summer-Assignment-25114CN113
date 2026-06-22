#include<stdio.h>
void uni(int arr1[50],int arr2[50],int num1,int num2);
int main(){
    int arr1[50],arr2[50],num1,num2,i;

    printf("enter number of elements");// 1st array enter
    scanf("%d",&num1);

    printf("enter elements");
    for(i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter number of elements in array2");//2nd array enter
    scanf("%d",&num2);

    printf("enter elements");
    for(i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }
    uni(arr1,arr2,num1,num2);

    return 0;
}  


void uni(int arr1[50],int arr2[50],int num1,int num2){
    int num3,i,j,temp2;
    num3=num1+num2;
    int arr3[num3];

    for(i=0;i<num1;i++){//1st array merged
        arr3[i]=arr1[i];
    }
    for(i=0;i<num2;i++){//2nd array merged
        arr3[i+num1]=arr2[i];
    }


    for(i=0;i<num3;i++){           //union
        for(j=i+1;j<num3;j++){
            if(arr3[i]==arr3[j]){

                temp2=arr3[num3-1];
                arr3[num3-1]=arr3[j];
                arr3[j]=temp2;

                num3--;
                j--; 
            }
        }
    }
    for(i=0;i<num3;i++){
        printf("%d",arr3[i]);
    }
    

}  
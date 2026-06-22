#include<stdio.h>
int main(){
    int arr1[50],arr2[50],arr3[100],num1,num2,i,j,a=0,count,temp2;

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
    for(i=0;i<num1;i++){
        count=0;
        for(j=0;j<num2;j++){
            if(arr1[i]==arr2[j]){
                count=1;
            }
        }
        if(count==1){
            arr3[a]=arr1[i];
            a++;
        }

    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(arr3[i]==arr3[j]){

                temp2=arr3[a-1];
                arr3[a-1]=arr3[j];
                arr3[j]=temp2;

                a--;
                j--; 
            }
        }
    }
    for(i=0;i<a;i++){
        printf("%d",arr3[i]);

    }
    return 0;
}  
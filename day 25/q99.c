#include <stdio.h>
void main() {
    char name[50][50],temp[50];
    int n,i,j,k;
    printf("Enter number of names: ");
    scanf("%d",&n);
    printf("Enter names:\n");
    for(i=0;i<n;i++){
        scanf("%s",name[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            k=0;
            while(name[i][k]==name[j][k]&&name[i][k]!='\0'&&name[j][k]!='\0'){
                k++;
            }
            if(name[i][k]>name[j][k]){
                
                for(k=0;name[i][k]!='\0'||name[j][k]!='\0';k++){
                    temp[k]=name[i][k];
                    name[i][k]=name[j][k];
                    name[j][k]=temp[k];
                }
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for(i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
}
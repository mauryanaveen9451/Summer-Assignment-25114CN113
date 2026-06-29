#include<stdio.h>
int main(){
    char str[100];
    int i,j,k,len=0;

    printf("enter string");
    fgets(str,sizeof(str),stdin);
    
    while(str[len]!='\0'){
        len++;
    } 
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
                for(k=j;k<len;k++){
                    str[k]=str[k+1];

                }
                len--;
                j--;
            }
        }
    }
    printf("string after removing duplicates %s",str);
    return 0;
}
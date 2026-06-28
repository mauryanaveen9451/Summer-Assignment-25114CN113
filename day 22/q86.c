#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int l=1,i;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            l++;
        }

    }
    printf("number of words are %d",l);
    return 0;

}
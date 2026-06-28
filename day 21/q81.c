#include<stdio.h>
int main(){
    char str[100];
    int c=0;
    printf("enter string");
    scanf("%s",&str);
    while(str[c]!='\0'){
        c++;
    }
    printf("string length is %d",c);
    return 0;

    
}
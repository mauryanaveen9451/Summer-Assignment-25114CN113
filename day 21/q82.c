#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len;
    printf("enter string");
    scanf("%s",str);
    printf("%s",strrev(str));
    return 0;

}
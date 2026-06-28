#include<stdio.h>
int main(){
    char str[100];
    int c=0;
    printf("enter string");
    scanf("%s",&str);
    while(str[c]!='\0'){
        if(str[c]>='a'&& str[c]<='z'){
            str[c]=str[c]-32;

        }
        c++;
    }
    printf("%s",str);
    return 0;

    
}
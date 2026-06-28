#include<stdio.h>
int main(){
    char str[100];
    int c=0,l=0;
    printf("enter string");
    scanf("%s",&str);
    while(str[c]!='\0'){
        if(str[c]=='a'|| str[c]=='e'|| str[c]=='i'|| str[c]=='o'||str[c]=='u'||str[c]=='A'|| str[c]=='E'|| str[c]=='I'|| str[c]=='O'||str[c]=='U'){
        l++;
    }
    c++;
    }
    printf("number of vowels is %d",l);
    return 0;

    
}
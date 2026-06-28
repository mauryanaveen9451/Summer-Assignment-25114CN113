#include<stdio.h>
int main(){
    char str[100],ch;
    int i=0,f=0;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    printf("enter character");
    scanf("%c",&ch);
    while(str[i]!='\0'){
        if(str[i]==ch){
            f++;
        }
        i++;
    }
    printf("frequency of %c is %d",ch,f);
    return 0;

}
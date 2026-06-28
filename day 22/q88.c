#include<stdio.h>
int main(){
    char str[100];
    int i=0,j=0;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("after removing spaces %s",str);

    return 0;

}
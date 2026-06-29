#include<stdio.h>
int main(){
    char str[200],w[100],l[100];
    int i=0,j=0,maxl=0,len=0;
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    while(1){
        len=0;
        while(str[i]!=' '&&str[i]!='\n'){
            w[len]=str[i];
            len++;
            i++;

        }
        w[len]='\0';
        if(len>maxl){
            maxl=len;
            for(j=0;j<=len;j++){
                l[j]=w[j];

            }
        }
        if(str[i]=='\0'||str[i]=='\n'){
            break;

        }
        i++;
    }
    printf("largest word is %s",l);
    return 0;
}
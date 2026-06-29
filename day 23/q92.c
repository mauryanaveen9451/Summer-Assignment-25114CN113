#include<stdio.h>
int main(){
    char str[100],ch;
    int i,j,c,l=0;

    printf("enter string");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0'&& str[i]!='\n';i++){
        c=0;
        
        for(j=0;str[j]!='\0'&&str[j]!='\n';j++){
            if(str[i]==str[j]){
                c++;

            }
        }
        if(c>l){
            l=c;
            ch=str[i];

        }
    }
    printf("most frequent character is %c",ch);

    return 0;

}
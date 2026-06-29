#include<stdio.h>
int main(){
    char str[100];
    int i,j,c,found=0;

    printf("enter string");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0'&& str[i]!='\n';i++){
        c=0;
        
        for(j=0;str[j]!='\0'&&str[j]!='\n';j++){
            if(str[i]==str[j]){
                c++;

            }
        }
        if(c>1){
            printf("first repeating character in the string is %c",str[i]);
            found=1;
            break;

        }
    }
    if (found==0){
        printf("no repeating character found");

    }
    return 0;

}
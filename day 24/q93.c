#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[200];
    int i,l;

    printf("enter string");
    fgets(str1,sizeof(str1),stdin);

    l=strlen(str1);
    if(str1[l-1]=='\n'){
        str1[l-1]=='\0';
        l--;
    }

    for(i=0;i<l-1;i++){
        str2[i]=str1[i+1];

    }

    str2[l-1]=str1[0];
    str2[l]='\0';

    printf("the rotated string %s",str2);
    
    return 0;
}
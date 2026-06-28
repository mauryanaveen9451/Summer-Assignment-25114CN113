#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str2[100];
    int c=0,l=0;
    printf("enter string");
    scanf("%s",str);
    strcpy(str2,str);
    strrev(str);
    while(str[c]!='\0' &&str2[c]!='\0'){
        if(str[c]==str2[c]){
    
    }
    else{
        printf("string is not palindrome");
        l=1;
        break;
    }
    c++;
}
if(l==0){
    printf("string is palindrome");
}
    return 0;

}
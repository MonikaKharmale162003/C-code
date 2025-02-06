#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        printf("%c it is alphabate",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c it is a number",ch);
    }
    else{
        printf("%c it is special character",ch);
    }
    return 0;
}
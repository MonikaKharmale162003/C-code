#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%5==0){
        printf("number divisible by 5");
    }
    else if(n%11==0){
        printf("number is divisible by 11");
    }
    else{
        printf("number should not be devide by 5 and 11");
    }
}
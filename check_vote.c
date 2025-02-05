#include<stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>18){
        printf("eligibal for vote");
    }
    else{
        printf("not eligibal for vote");
    }
}
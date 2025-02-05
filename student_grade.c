#include<stdio.h>
int main(){
    int marks;
    printf("enter a marks");
    scanf("%d",&marks);
    if(marks>90 && marks<=100){
        printf("grade A");
    }
        else if(marks>70 && marks<=89)
        {
         printf("grade B");
        }
        else if(marks>50 && marks<=69){
            printf("grade c");
        }
        else if(marks>35 && marks<=49){
            printf("grade D");

        }
        else{
            printf(" student fail");
        }
    }

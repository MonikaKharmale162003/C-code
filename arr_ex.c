#include<stdio.h>
int main(){
    int num[5];
    int sum=0;

    printf("enter  a array elemnt ");
    for(int i=0;i<5;i++){
    scanf("%d",&num[i]);
    }
    printf("array is");
    for(int i=0;i<=4;i++){
        printf(" %d",num[i]);
    }
 printf("\n");
 
    for(int i=0;i<5;i++){
        sum=sum+num[i];
    }
        printf("sum=%d",sum);
      
    }


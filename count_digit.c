#include<stdio.h>
int count_digit(int num){
    int count=0;
    if(num==0){
        return 1;
    }
   while(num!=0){
        num/=10;
        count++;
    }
    return count;
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int result=count_digit(num);
    printf("number of digit:%d\n",result);
    return 0;
}
#include<stdio.h>
int main(){
    int num=876594;
   
    int count=0;
    int sum=0;
    while(num>0){  
        sum=sum+num%10;   
        count++;
        num=num/10;  
      
    }
    printf("The count of digit is %d\n ",count);
    printf("sum=%d",sum);
}

#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf(" factorial of %d= %d",n,fact(n));
    }
int fact(int n)
{
if(n>=1){
    return n*fact(n-1);}
else{
    return 1;
    }
    }





    
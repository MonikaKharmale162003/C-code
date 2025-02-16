#include<stdio.h>
int gcd(int a,int b){
    if(b==0)
    return a;
    return (b,a%b);
}
int main(){
    int a=48;
    int b=18;
    printf(" the gcd of  %d and %d is  %d\n",a,b,gcd(a,b));
}


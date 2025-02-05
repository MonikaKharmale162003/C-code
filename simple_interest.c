//simple Interest

#include<stdio.h>
int main(){
    float principal,rate,time,simpleinterest;
    printf("Enter the principle amount:");
    scanf("%f",&principal);

    printf("enter the rate of interest:");
    scanf("%f",&rate);

    printf("enter the time:");
    scanf("%f",&time);

    simpleinterest=(principal*rate*time)/100;
    printf("simple intereste=%2f\n",simpleinterest);
    return 0;
}





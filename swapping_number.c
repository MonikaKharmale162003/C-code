//SWAPPING TWO NUMBER WITHOUT USING THIRD VARIABLE


#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    a=a+b;//5+10=15
    b=a-b; //5-10=5
    a=a-b;//15-5=10
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}

//SWAPPING TWO NUMBER

#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
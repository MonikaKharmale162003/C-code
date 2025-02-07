#include<stdio.h>
int swap(int m, int n){
    int temp=m;
       m=n;
       n=temp;
   printf("value after call a=%d",m);
 printf("value after call b=%d",n);

}
int main(){

    int a=10;
    int b=20;
    printf("value before calling a=%d\n ",a);
    printf("value before calling b=%d\n",b);
    swap(a,b);
}



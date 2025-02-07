#include<stdio.h>

int  swap(int *m,int *n){
    int temp=*m;
    *m=*n;
    *n=temp;
printf("after swapping value a=%d\n",*m);
printf("after swapping value b=%d\n",*n);
}

int main(){
int a=10;
int b=20;
printf("value before calling a=%d\n",a);
printf("value before calling b=%d\n",b);
swap(&a,&b);
printf("the value of after calling a=%d\n",a);
printf("the value of after calling b=%d\n",b);

}




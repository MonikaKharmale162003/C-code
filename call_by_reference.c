#include<stdio.h>

int show(int *num){
    printf("the value of num before adding %d\n",*num);
    *num=*num+10;
    printf("the value of before adding %d\n",*num);
}
int main(){
    int n=10;
    printf("the value of n before function call %d\n",n);
    show(&n);
    printf("the value of n after calling %d\n",n);

}

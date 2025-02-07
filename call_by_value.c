#include<stdio.h>
int show(int num){
    printf(" value of num before adding is %d\n",num);
    num=num+10;
    printf("value of after adding %d\n",num);

}
int main(){
    int n=10;
    printf("the value of n before function call is %d\n",n);
   show(n);
   printf("the value of n after function call is %d",n);
}


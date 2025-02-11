//addition of previous 2 number


#include<stdio.h>
int main(){
    int m=0;
    int n=1;
    int o,t;
    printf("the fibonacci series:%d %d\n",m,n);
     for(t=1;t<=10;t++){
        o=m+n;      
        printf("%d ",o);
        m=n;   
        n=o;  
     }
}


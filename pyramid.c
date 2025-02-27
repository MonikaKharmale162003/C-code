#include<stdio.h>
int main(){
    int r,c,s,n;
    printf("enter n value");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(s=4;s>=r;s--){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf(" *");
        }

        printf("\n");
    }
    return 0;
}
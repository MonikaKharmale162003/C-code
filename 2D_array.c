//2 DIMENTION  ARRAY


#include<stdio.h>
int main(){
    int num[2][3]={{1,2,3},{4,5,6}};
    int i,j;
    for(i=0;i<=1;i++){
        for(j=0;j<=3;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
}
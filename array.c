//1 DIMENTION ARRAY

#include<stdio.h>
int main(){
    int num[3];
    num[0]=10;
    num[1]=20;
    num[2]=30;

    // printf("%d ",num[0]);
    // printf("%d ",num[1]);
    // printf("%d ",num[2]);

    for(int i=0;i<=2;i++){
        printf("%d ",num[i]);
    }
}

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


//3 DIMENTIONAL  ARRAY

#include<stdio.h>
int main(){
    int num[2][4][4]={{{1 ,2, 3, 4},{1,2,3,4},{1,2,3,4},{1,2,3,4}},{{1,2, 3, 4},{1,2,3,4},{1,2,3,4},{1,2,3,4}}};
    for(int i=0;i<=1;i++){//0<=1=true   1<=1=true
        for(int j=0;j<=3;j++){//0<=3  0<=1 1<=2  2<=3
            for(int k=0;k<=3;k++){
                printf("%d",num[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    //000=1  001=2  002=3  003=4
    //010=1   011=2  012=3 013=4
    //020=1    021=2  022=3  023=4
    //030    031=2    032=3  033=4

 }
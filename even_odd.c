#include<stdio.h>
void display_even_odd(int start,int end){
    printf("even number between %d and %d:",start,end);
        for(int i=start;i<=end;i++){
        if(i%2==0){
         printf("%d\n",i);
        }
        }
        printf("odd number between %d and %d:",start,end);
        for(int i=start;i<=end;i++){
            if(i%2!=0){
                printf("%d\n",i);
            }
        }
     }
    int main(){
        int start,end;
        printf("enter the start of the range:");
        scanf("%d",&start);
        printf("enter the end of the range:");
        scanf("%d",&end);
        display_even_odd(start,end);
        return 0;
    }

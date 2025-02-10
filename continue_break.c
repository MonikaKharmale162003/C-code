//BREAK STATEMENT

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
        break;
        }
        printf("%d\n",i);
    }
    return 0;
}


//CONTINUE STATEMENTS

#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        if(i==4){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
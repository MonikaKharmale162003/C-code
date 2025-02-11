#include<stdio.h>
int main(){
    int num=876594;

    int count=0;
  
    while(num>0){     //876594>0true   87659>0true...........0>0false
        count++;
        num=num/10;  //876594/10=87659.4    87659/10=8765.9    8765/10=876.5    876/10=87.6   87/10=8.7   8/10=0.8
       
    }
    printf("The count of digit is %d ",count);
   
}
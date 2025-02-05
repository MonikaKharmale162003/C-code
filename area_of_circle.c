//area of circle

#include<stdio.h>
int main(){
   float radius,area;
   float pi=3.14;
    printf("enter radius of circle:");
    scanf("%f",&radius);
     area=pi*radius*radius;
 printf("area of circle=%f",area);
 return 0;
}
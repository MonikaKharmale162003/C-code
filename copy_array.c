#include<stdio.h>
int main(){
    int arr1[]={1,2,3};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[n];
 
    printf("source array");
    for(int i=0;i<n;i++){
       arr2[i]=arr1[i];
       printf("%d",arr1[i]);
    }
    printf("\ndestination array");
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}
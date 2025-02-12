//WITHOUT FUNCTION

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("largest element%d\n",largest);
    return 0;
}
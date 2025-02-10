#include<stdio.h>
void largest(int arr[],int size){
    int largest=arr[0];
    
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("largest element :%d\n",largest);
}
int main(){
    int arr[]={12,5,8,30,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    largest(arr,size);
    return 0;
}
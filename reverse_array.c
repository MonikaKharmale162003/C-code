#include<stdio.h>
void reverse_array(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
    int main(){
        int arr[]={1,2,3,4};
        int size=sizeof(arr)/sizeof(arr[0]);
        printf("original array");
        for(int i=0;i<size;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
        reverse_array(arr,size);

        printf("reverse array");
        for(int i=0;i<size;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
        return 0;
    }

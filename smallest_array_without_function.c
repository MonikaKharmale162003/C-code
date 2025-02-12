//WITHOUT USING FUNCTION
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf(" smallest element=%d",smallest);
    return 0;
}
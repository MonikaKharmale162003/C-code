#include<stdio.h>
int main(){
   int n;

    printf("enter a input in array");
    scanf("%d",&n);

    int arr[n];

    printf("enter %d element",n);
    for(int i=0;i<=n;i++){
    scanf("%d",&arr[i]);
    }

    printf("even number in array");
    for(int i=0;i<n;i++){
    if(arr[i]%2==0){
    printf("%d\n",arr[i]);
    }
}
printf("\n");
return 0;
}
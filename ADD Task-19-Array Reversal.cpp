#include<stdio.h>
int main(){
  int arr[]={1,3,5,7};
  int size_arr=sizeof(arr)/sizeof(arr[0]);
  for(int i=size_arr-1;i>=0;i--){
    printf("%d ",arr[i]);
  }

    return 0;
}

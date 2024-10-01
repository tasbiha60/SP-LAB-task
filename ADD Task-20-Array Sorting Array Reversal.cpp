#include<stdio.h>
int main(){
    int arr[]={2,1,4,3,5,6,8,10,7,9};
    for(int i=0;i<10;i++){
    for(int j=i;j<10;j++){
        if(arr[i]>arr[j])
        {

            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<10;i++){
    printf("%d",arr[i]);
}
return 0;
}

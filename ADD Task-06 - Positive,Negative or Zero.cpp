#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Positive\n");
    }
    else if(n<0){
        printf("Negeive\n");
    }
     else if(n==0){
        printf("0\n");
    }
    return 0;
}

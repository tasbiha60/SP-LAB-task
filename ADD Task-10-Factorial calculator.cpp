#include<stdio.h>
int main(){
    int num,count=1,fact=1;
    scanf("%d",&num);
    while(count<=num){
        fact=fact*count;
        count++;

    }
    printf("Factorial of %d is %d\n",num,fact);
    return 0;
}

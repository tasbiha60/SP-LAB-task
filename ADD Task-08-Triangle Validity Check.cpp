#include<stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("Triangle is valid\n");
    }
    else{
        printf("Triangle is not valid\n");
    }
    return 0;
}

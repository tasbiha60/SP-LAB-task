#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the largest number\n");
        }
        else{
            printf("c is the largest number\n");
        }
    }
    if(b>c){
        printf("b is the largest number\n");
    }
    else{
        printf("c is the largest number\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int num,sum=0,rem,ori;
    scanf("%d",&num);
    ori=num;
    while(num>0){
        rem=num%10;
        num=num/10;
        sum=(sum+rem*rem*rem);

    }
    printf("sum = %d\n",sum);
    if(ori==sum)
    {
     printf("Armstrong Number\n");

    }
    else{
        printf("Armstrong Number Not\n");
    }
    return 0;
}

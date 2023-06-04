#include<stdio.h>
void main(){
    int  num,n=0,rem,num2;
    printf("enter the number:");
    scanf("%d",&num);
    num2=num;
    while(num!=0){
        rem=num%10;
        n=n*10+rem;
        num/=10;
    }
    if (num2==n){
        printf("pallindome");
    }else{
        printf("not apallindorme number");
    }
    return 0;
}
#include<stdio.h>
void main(){
    int a,b;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
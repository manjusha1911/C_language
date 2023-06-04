#include<stdio.h>
int square(int n){
    return n*n;
}
void main(){
    int result;
    result=square(10);
    printf("%d",result);
    return 0;
}







#include<stdio.h>
int square(int n){
    return n*n;
}
void main(){
    int sqr;
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    sqr=square(num);
    printf("%d",sqr);
    return 0;
}
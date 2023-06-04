#include<stdio.h>
int main(){
    int a[10]={10,20,30,40};
    int sum;
    for (int i=0;i<4;i++){
    sum+=a[i];}
    printf("%d",sum);
    return 0;
    
}
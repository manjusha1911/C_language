#include<stdio.h>
int main(){
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if (x<0){
        printf("%d x greater than 0:",x);
    }
    else if(x>0){
        printf("%d x is greater than 0",x);
    }
    else{
        printf("enter the valid input");
    }
    return 0;
}

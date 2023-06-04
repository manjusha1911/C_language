#include<stdio.h>    //while loop
int main(){
    int n;
    int i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=10){
    printf("%d X %d\n",n,i,n*i);
    i++;
    }
    return 0;
}



int main(){           //for loop
    int n;
    int i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10;){
    printf("%d X %d\n",n,i,n*i);
    i++;
    }
    return 0;
}
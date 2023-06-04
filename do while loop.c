#include <stdio.h>
int main(){
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }
    while (i<=5);
    return 0;
}



#include<stdio.h>      
int main(){
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    do{
        printf("%d\t",i);
        i++;
    }
    while(i<=10);
    return 0;
}
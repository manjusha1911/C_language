#include<stdio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if (year%4==0){
        printf("%d year is leap year:",year);
    }
    else{
        printf("not a leap year");
    }
    return 0;
}  



//except w3 schools it works in any compiler
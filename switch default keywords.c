#include<stdio.h>   //switch
int main(){
    int d=5;
    switch (d){
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tuesday");
            break;
        case 4:
            printf("wednesday");
            break;
        case 5:
            printf("tuesday");
            break;
        case 6:
            printf("friday");
            break;
        case 7:
            printf("saturday");
            break;
        }
    }




#include<stdio.h>    //default keyword
int main(){
    int d=8;
    switch (d){
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tuesday");
            break;
        case 4:
            printf("wednesday");
            break;
        case 5:
            printf("tuesday");
            break;
        case 6:
            printf("friday");
            break;
        case 7:
            printf("saturday");
            break;
        default:
        printf("week has only 7days")
        }
    }
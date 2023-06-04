#include<stdio.h>
int main(){
    int matrix[1][2]={{12,13,24},{15,16,17}};
    matrix[0][2]=14;
    printf("%d",matrix[0][1]);
    return 0;

}
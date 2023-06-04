#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filename3.txt","a");
    fprintf(fptr,"Har har mahadev;");
    fclose(fptr);
    return 0;
}
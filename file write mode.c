#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filename2.txt","w");
    fprintf(fpter,"write somthing");
    fclose(fptr);
    return 0;
}
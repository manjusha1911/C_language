#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filename3.txt","r");
    char mystring[100];
    fgets(mystring,100,fptr);
    printf("%s",mystring);
    fclose(fptr);
    return 0;
}
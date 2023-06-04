#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filename3.txt","r");
    char mystr[100]
    while(fgets(mystr,100,fptr)){
        printf("%s",mystr);
    }
    fclose(fptr);
    return 0;
}
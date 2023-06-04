#include<stdio.h>
void(){
    FILE *f;
    char txt[100];
    f=fopen("filename.txt","r");
    while (fscan(f,"%s",txt)!=EOF){
        printf("%s",txt);
    }
    fclose(f);
    return 0;
}
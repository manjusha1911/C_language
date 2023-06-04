#include<stdio.h>
#include<string.h>
int main(){
    char a[15]="om";
    char b[]="sai ram";
    strcpy(a,b);
    printf("%s",a);   //output=sair ram
    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    char a[15]="om";
    char b[]="sai ram";
    strcpy(b,a);
    printf("%s",b);   //output=om
    return 0;
}


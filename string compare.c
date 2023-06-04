#include <stdio.h>
#include<string.h>
int main(){
    char a[]="hello";
    char b[]="hi";
    char c[]="hello";
    printf("%d\n",strcmp(a,b));
    printf("%d",strcmp(a,c));
    return 0;
    }
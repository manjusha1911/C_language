#include<stdio.h>     //all data types
#include<string.h>
struct mys{
    int a;
    float b;
    char c;
    char d[20];
};
int main(){
    struct mys s;
    s.a=20;
    s.b=10;
    s.c='S';
    strcpy(s.d,"OM sai ram");
    printf("%d\n%.1f\n%c\n%s",s.a,s.b,s.c,s.d);
    return 0;
    }
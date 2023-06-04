#include <stdio.h>
int main(){
    int myint;
    float myf;
    double myd;
    char mychr;
    printf("%lu\n", sizeof(myint));
    printf("%lu\n",sizeof(myf));
    printf("%lu\n",sizeof(myd));
    printf("%lu\n",sizeof(mychr));
    return 0;
}